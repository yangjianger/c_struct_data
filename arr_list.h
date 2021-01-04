//
// Created by 杨江 on 1/4/21.
//

//线性表 ---> 数组实现

#ifndef C_STRUCT_ARR_LIST_H
#define C_STRUCT_ARR_LIST_H

typedef void SeqList;
typedef void SeqListNode;

//创建线性表
SeqList* SeqList_Create(int capacity);

//销毁线性表
void SeqList_Destroy(SeqList* list);

//清空线性表
void SeqList_Clear(SeqList* list);

//获取线性表元素个数
int SeqList_Length(SeqList* list);

//获取线性表容量
int SeqList_Capacity(SeqList* list);

//在某个位置添加元素
int SeqList_Insert(SeqList* list, SeqListNode* node, int pos);

//获取元素
SeqListNode* SeqList_Get(SeqList* list, int pos);

//删除元素
SeqListNode* SeqList_Delete(SeqList* list, int pos);

#endif //C_STRUCT_ARR_LIST_H
