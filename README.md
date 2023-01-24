##ALX Software Engineering Team Project - Printf

This team project is a custom made printf function in c programming language called \_printf. It has been optimized to take various inputs and optional arguments based on how the standard printf works.

###Synopsis
This function \_printf() writes output to stdout, the standard output stream with the format and options without making use of any of the standard library files. The \_printf() function returns the total number of characters printed to the stdout (excluding the null buyte at the end of strings) after a successful execution.

If an output error is encountered, a negative value of -1 is returned. The prorotype of this function is: int \_printf(const char format, ...).

####Format of the format string
The format string is a character string starting and endiwth with double quotes. The format string is composed of zero or more directives; ordinary characters, and conversion specifications, each of which results in fetching zero or more subsequent arguments.
