# MouseScrollAdjust
Get and set your mouse scroll sensitivity with this simple command line tool for Windows. Use the argument "get" to retrieve the current scroll wheel settings, and simply send an integer argument to set the sensitivity. Very little input verification is done, so anything weird is likely to mess it up.
Autohotkey friendly! Here's the script I use, I can press shift+f2 to toggle between scrolling 1 line and 3 lines with each notch on my scroll wheel:
```Autohotkey
smallscroll:=0
+F2::
	if(smallscroll){
		Run, "[Pathtoscript]\MouseScrollAdjust.exe" "3" , ,Hide ; set to scroll 3 lines
		smallscroll:=!smallscroll
	}
	else {
		Run, "[Pathtoscript]\MouseScrollAdjust.exe" "1" , ,Hide ; set to scroll 1 line
		smallscroll:=!smallscroll
	}
Return
```
