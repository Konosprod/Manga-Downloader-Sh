extractb:
	gcc extract.c -o extract

extract2b:
	gcc extract2.c -o extract2
	
extract3b:
	gcc extract3.c -o extract3
	
test-imgb:
	gcc test-img.c -o test-img

all: extractb extract2b extract3b test-imgb
	sudo chmod +x lel_downloader citymanga_downloader mangareader_downloader manga_downloader_ui
	sudo cp -r extract extract2 extract3 test-img lel_downloader citymanga_downloader mangareader_downloader manga_downloader_gui /usr/local/bin
