�Z3ENV �*	�W�SYSTEM  �7�;�WHEEL, Version 3.1
 :] � �]�/��:^ 2m �Rʊ�Sʊ�7�͐
	WHEEL is used to Set and Reset (Clear) the Wheel
Byte in order to enable (Wheel Byte is Set) or disable
(Wheel Byte is Reset) certain commands within ZCPR2.

The forms of the WHEEL command are:
	WHEEL //		<-- Print Help
	WHEEL			<-- Print Wheel Byte Setting
	WHEEL password SET	<-- Set Wheel Byte
	WHEEL password		<-- Set Wheel Byte
	WHEEL password RESET	<-- Reset (Clear) Wheel Byte
	WHEEL /S or WHEEL /R	<-- Set or Reset Wheel Byte
					but allow user to type in password
					without echo
 ��7�͐ Wheel Byte is  �E�ʂ͐ON �͐OFF �͐ Wheel Password?  �X��]�~�Mw#�ʺ©��+> w#½���!] ���#��:m �R��>��$�]��$�]�7�͐
 Invalid Password ���7� ���~#������Ð���*[) ~#fo�w�����*[( ~�����*[) ~#fo~���"[�k/����2v"t*t �(� �l������	ʰ��2�
���������ʸ�ʪw#�S�l���lw#�w�l6  *t�l~��l�S~�	�����#���l�gy��g���6#6
# :v����l�@�l+~�S��l�l��l�@�+:v��>�9> �9>�9�6 :v���������*t�z��{���>�9���G:v�x��� �d�9�	�w��>#�9��K�y�G>�G�O:v��> �9��͖����� ~#����	��������
��������Û ÛÛy�ʛÛy�G>�G�O> �9��Û�����>�9>
�9��� �9� �9��9��9�
�9��9��>^�9��@�9�����* .	5����������O* .H���������a��{��_��*f}��d$. ��h������>�9>
�9��� �9