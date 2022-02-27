--As practice, split the userinput sting into url and markname.
function url(userinput)
	local input = userinput
	local temp_url = string.match(input, 'http.*$')
	local temp_name = string.match(input, '^%S*')
	return temp_url
end

!CommandMeasure: Skin "github学习   https://zh.wikipedia.org/wiki/%E5%AF%BC%E6%95%B0%E5%88%97%E8%A1%A8" not found (BookMarks\Main.ini)
