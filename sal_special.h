
#ifndef __SAL_SPECIAL_H__
#define __SAL_SPECIAL_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif

/*****************************************************************************
 �� �� ��: sal_special_start
 ��������  : ��ʼ������ģ�飬�˽ӿ�����Ƶģ���ʼ������Ա�����
 �������  : ��
 �������  : ��
 �� �� ֵ: �ɹ�����0,ʧ�ܷ���С��0
*****************************************************************************/
int sal_special_start();

/*****************************************************************************
 �� �� ��: sal_special_start
 ��������  : ȥ��ʼ������ģ�飬�˽ӿ�����Ƶģ���ʼ��ǰ���Ա�����
 �������  : ��
 �������  : ��
 �� �� ֵ: �ɹ�����0,ʧ�ܷ���С��0
*****************************************************************************/
int sal_special_stop();

/*****************************************************************************
 �� �� ��: sal_special_disable
 ��������  : ����ʼ������ģ�飬�ڲ�ʹ�ýӿ�
 �������  : disable 1 ����������ģ�� 0 ��������ģ��
 �������  : ��
 �� �� ֵ: �ɹ�����0,ʧ�ܷ���С��0
*****************************************************************************/
int sal_special_disable(int disable);



#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif

#endif
