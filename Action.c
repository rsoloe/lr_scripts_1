Action()
{

	lr_start_transaction("download");
	

	web_custom_request("big file", "Method=GET",

    "URL=http://soloe-large-website.s3-website-us-east-1.amazonaws.com/soloe-anna.jpg",
    //"URL=http://soloe-large-website.s3-website-us-east-1.amazonaws.com/1GB.bin",

    //"Body={myImage}",

    LAST );


	lr_end_transaction("download",LR_AUTO);

	return 0;
}