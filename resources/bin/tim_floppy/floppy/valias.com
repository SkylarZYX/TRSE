�Z3ENV �*	�!  9"�1���n͒��͕�2�:] �/�K���@��@�P���U�:] �!���
��ͬCMD LETTER (Clear Delete Format Help Insert Load Mode Replace Save eXit): ͙�C���D�i�F���H���I���L���M�|�Rʙ�S��X���¥��ø!Ϳ��t��	C   clear all commands and start over �t��	D   delete specified line �t��	F   reformat commands (one per line, no leading spaces) �t��	I   insert commands before specified line �t��	L   load new alias file or name �t��	M   set normal or recursive mode �t��	R   replace specified line with new line �t��	S   save commands in an alias file �t��	X   exit to ZCPR3 �t�X$Ϳ��ͬAlias Mode (N=normal R=recursive): ͙ �N����R����X��Xâx2���X͕��	�2��ͬLine Before Which to Insert (cr to cancel)? ��XͬEnter Commands (end with empty line): �x	����_�o!�4~��X��5!�I��~��5�X:�����XͬLine to Delete ( cr to cancel )? ��X���XͬLine to Replace (cr to cancel)? ��XͬEnter New Line at Cursor ���o�X��
͕! @͛��	�X�0��LOAD:  �[�X͕�R�2��
͍�#^#V! ��+:�w  @��o	�0��SAVE:  �[�X\ �pʬ�0��File  �{��.COM Exists - Overwrite (Y/N)? �N͙�Y�6ͬErasing Old File \ ���ͯ�0��Saving Alias  �{�� to Disk �N\ �)�{͍� ��u\ ͤ����͉�X��

 Error in Creating File ø��~��x��,>;:T��~��#�;��,�P��

 No TCAP or TCAP lacks required functions ø>!���!  L ==DM��*"}�o� ��+�G�C����L �����x�������;ʣw#ø�����w#���w��:���L �~#x����2�I��	��$��Alias Name:  �{�N����9�� Mode:  :��!=�3!D���N���Normal Recursive �i�d�i�����9��Name of ALIAS Command ( ^A = abort :] �!ڠ�� | CR =  �{�� )? �N>�͹��~�����\ ́�$�����:] �!�[:\ ���=G!i N��\ �)���=�!] >?�#����> 2] >Ͱ�͙�����A���2�<���-�9�i����9�i�:��g.Ϳ���P��


SYNTAX: VALIAS [ [DIR:]ALIASNAME ] 


If the optionally specified alias file exists, it is opened
for editing.  Otherwise it is used as the default name for
a new alias.  Editing commands allow insertion, deletion,
or replacement of command lines.  Wheel status is required. ø~#��o	ɯ2�:����~���	:����	>�2�!�I��~�ʲ	WI�¥	>;�o	�w!�I�I~+x�»	:��6 ��	ɯ��	:�O�AGy�g.Ϳ! DL ���	��	�>�O�xͰ��--> ����Y���	��$�!\ ~��'
=Gx<w �N����>�]
y2i �$��New Alias File:  �{�N7�! @	\ ͙«
� ���u��b
�$��File  �{��.COM is Not an Alias �N> 2] 7�͉�!i q*@	?���y
#��
�*@�>	 ~�F��
#F!�p��͛��	���u2T! D @ �����L ���
> ��ͬCommand Line Too Long - Truncated ��  strike any key ͙� ��

 Access Denied -- Not Wheel ø�!\ ~�x<2\ �@Ͱy2i � >:Ͱ#~� �Ͱ#��0�����N�����

 *����<>�͹�L�ͬERROR -- line to long -- strike any key and reenter: ͙����! DL <=�!�����!e 6C#6O#6M��͍###:��G�w#�G����9�� VALIAS 1.0 �N�> Ͱ���:������G��u�:��g.Ϳ�����! D���K�Z3 ALIAS                                                       ��V#^#�Ϳ������*~�!� V###~�����=������*~�!�5 V#�a�a~��5���=������*~�!�`  �a�a�a~��`���=������*~�!ڎ  �a�a�a�a~�ʎ���=�������*~�!ڻ  �a�a�a�a�a~�ʻ��������*~�!�� ~2##�a~��������:�*����=������%-�22���%��\�Ͱ��Ͱ���dʩ�2ʣ�3ʊ�.ʁ�+�l�>�Y�r�Q�i�IͰ��>2��>2��ͺO��h�����Gͺ�Ͱ:��2��ͺͰ�vͺd��
���0Ͱ�vͺÔͺd ��
 Ø:������:��:�������O:������i�a�������0�������z�0�	y��zͰ���   ~��&#�\� ~#Ͱ�z�*����O��K*�+ ~��A>G��P��B������X�P����Z�~#���\�a#�a�"�� "��"�  �2p�0��B��͘��:r�ɯ2s2r�y2t���~2q�:��#:p����@��͝��:p����@:s��Mѯ2r���~2q:q� 	��.�#���� 	�:t:r������*�&>?�9�-#�?�9����#�1�!r4�����H���͈���#͖G~�A�m�@�Қ2s#~� ��6��~� ʇ�6ڙ#�p~� �ͤO��Қ2t���=���ͥ���Ͳ���#��������#¸����� 	�í�=�2t2s��~�!� �=��_��.��:��,��<��>ȷ��;ɯ�� ~���/#�6�3Wy�3�3��3�3��3O�y����7��0��
�@?�7ɯ�M�M�> �`��y��`�~#�g�     �*� ^#V�������*�. ~�����*�, ~�����*�- ~����*� ^#V#~�ѷ���*�) ~#fo~���"��  ���O���?�������!	 y�#y���)� ��������>�������~�G�怰w������w �B���������(���Q>���R���������(���Q�(���Q�K���(��<�ͯ���(�������(��ʖ�������(�������(�������(���È�                                                                                                                                                                                                           ��2��
� !�~#�o|� g6 :��ʹ!�~�ʹ�	w#ì��!�:���������� ~#���	��f����
���������� ����y�����y�G>�G�O> Ͱ����������d�8
�8�0Ͱ���� ��B�:�_y��O��O{� y�0Ͱ{��>Ͱ>
Ͱ��� Ұ� ʰ�ʰ�ʰ�
ʰ�ʰ��>^Ͱ��@Ͱ��͙ð͟�	���* .	�����������O* .������������� 2�� � 2�������:�_� :�_ � �����  ����Y �� �X� ��������� �� � O�G������� �����~��?�	w#�2����H �K������W�l������H �a�����W�l����r#x��l�͌�H 	�	���͕�	�	����H ͕������|�ڵ¦}�ڵ~#x�¦�����	�	�~+x�»ð�~#�������+���~#�����������O�	! ���#��y���  	
��a��{��_��*"}�� $. ��$x� 20=*C="?=���x�4̓ :�>����"C=~��w|21=�m-x�¯*C=�-#~�µ~�@�� w#s#r#��*�=�s#r��4�͸�Z3ENV �F *	��Z3 ALIAS                                                                                                                                                                                                                                                                ���~��K�$�5#�%%�#~���*��D���U���Fʓ�Nʧ�0�*�
�*��0G#�!� ͜~�ʑʅ~#� �k�ʑ�w~�!ڑ#Å��ʹ������>.����ʹ��������#~�1�����#ɯ�G��x��� ������~� ��#���ͅx�A#�ͅy
0������0Gy�0�x#�#�!� ~��(#���>$#�#���ʑ#~� ʑ#�;Ñ���~�����G|��  x��  ��p��Ovfl �"��ʅG��~�ʇ#�z���*�^#V�:�ʘ6 ��~�;ʬ�ʬ>;ʸ~#�ʿ¬�6 �Å�*� ��s#r�~#����=�  �* ^#V������*$ ~#fo�|��*���*R ���"�  ������� ~#��m�	�W�q��D�
�I��I��M� ��y���y�G>�G�O> �q�c���������O* .������������ �� � O�G�����~#�ʩͼʝ+���~#�ʩͼ­é��O�	!����#��y���  	
��a��{��_��*�}���$. ����dO:[?�