#include "MapManager.h"

<<<<<<< HEAD
#define RowNumber 8
#define ColNumber 8
=======

>>>>>>> 822ead6ec9374da0132bc7693303566b4ef4f701

//获取下棋位置列表
//player：黑骑或者白漆
//ret 返回坐标的二维数组
//返回值 ：列表长度，存储从0开始
<<<<<<< HEAD
int MapManager_GetCanGoList(int player, int ret[32][2])
{
    int ListLength = 0 ;
    for (int i = 1; i <= RowNumber; ++i){
        for (int j = 1; j <= ColNumber; ++j){
=======
int MapManager_GetCanGoList(int player, int ret[64][2])
{
    int ListLength = 0 ;
    for (int i = 1; i <= ColNumber; ++i){
        for (int j = 1; j <=RowNumber ; ++j){
>>>>>>> 822ead6ec9374da0132bc7693303566b4ef4f701
            if(MapManager_CanGo(player, i, j)){
                ret[ListLength][0]=i;
                ret[ListLength][1]=j;
                ListLength++;
            }
        }
    }
    return ListLength;
}
