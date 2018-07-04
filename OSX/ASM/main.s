			global	start
			%include "ft_isdigit.s"
			%include "Hello.s"

			section	.text
start:	
			call	say_hello
			call	say_hello
			call	say_hello