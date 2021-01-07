void TransformMagicCube(MagicCube up[][4],MagicCube down[][4],MagicCube left[][4],
           MagicCube right[][4],MagicCube front[][4],MagicCube back[][4],CHAR chBuf)
{
 //���ݸ��ֱ任�޸����������ɫֵ
 int temp[4],i,j;
 //����ֱ�˳ʱ����ת90��U0,��ʱ����ת90��U1��˳ʱ����ת180��U2
 if (!strcmp(chBuf.ch,"U0"))
 {
  //�޸Ķ������ɫֵ
  temp[0]=up[1][1].color;
       up[1][1].color=up[3][1].color;
  up[3][1].color=up[3][3].color;
  up[3][3].color=up[1][3].color;
  up[1][3].color=temp[0];

  temp[0]=up[1][2].color;
  up[1][2].color=up[2][1].color;
  up[2][1].color=up[3][2].color;
  up[3][2].color=up[2][3].color;
  up[2][3].color=temp[0];

  //�޸��ĸ��������ɫֵ
  for (i=1;i<=3;i++)
  {
   temp[i]=left[1][i].color;
   left[1][i].color=front[1][i].color;
   front[1][i].color=right[1][i].color;
   right[1][i].color=back[1][i].color;
   back[1][i].color=temp[i];
  }
 }
 else if (!strcmp(chBuf.ch,"U1"))
 {
  temp[0]=up[1][1].color;
  up[1][1].color=up[1][3].color;
  up[1][3].color=up[3][3].color;
  up[3][3].color=up[3][1].color;
  up[3][1].color=temp[0];

  temp[0]=up[1][2].color;
  up[1][2].color=up[2][3].color;
  up[2][3].color=up[3][2].color;
  up[3][2].color=up[2][1].color;
  up[2][1].color=temp[0];

  for (i=1;i<=3;i++)
  {
   temp[i]=left[1][i].color;
     left[1][i].color=back[1][i].color;
   back[1][i].color=right[1][i].color;
   right[1][i].color=front[1][i].color;
   front[1][i].color=temp[i];
  }
 }
 else if (!strcmp(chBuf.ch,"U2"))
 {
  temp[0]=up[1][1].color;
  up[1][1].color=up[3][3].color;
  up[3][3].color=temp[0];

  temp[0]=up[3][1].color;
  up[3][1].color=up[1][3].color;
  up[1][3].color=temp[0];

  temp[0]=up[2][1].color;
  up[2][1].color=up[2][3].color;
  up[2][3].color=temp[0];

  temp[0]=up[1][2].color;
  up[1][2].color=up[3][2].color;
  up[3][2].color=temp[0];

  for (i=1;i<=3;i++)
  {
   temp[0]=left[1][i].color;
   left[1][i].color=right[1][i].color;
   right[1][i].color=temp[0];

   temp[0]=front[1][i].color;
   front[1][i].color=back[1][i].color;
   back[1][i].color=temp[0];
  }
 }
   //����ֱ�˳ʱ����ת90��D0,��ʱ����ת90��D1��˳ʱ����ת180��D2
 else if (!strcmp(chBuf.ch,"D0"))
 {
  //�޸ĵ������ɫֵ
  temp[0]=down[1][1].color;
       down[1][1].color=down[3][1].color;
  down[3][1].color=down[3][3].color;
  down[3][3].color=down[1][3].color;
  down[1][3].color=temp[0];

  temp[0]=down[1][2].color;
  down[1][2].color=down[2][1].color;
  down[2][1].color=down[3][2].color;
  down[3][2].color=down[2][3].color;
  down[2][3].color=temp[0];

  //�޸��ĸ��������ɫֵ
  for (i=1;i<=3;i++)
  {
   temp[i]=left[3][i].color;
   left[3][i].color=back[3][i].color;
   back[3][i].color=right[3][i].color;
   right[3][i].color=front[3][i].color;
   front[3][i].color=temp[i];
  }
 }
 else if (!strcmp(chBuf.ch,"D1"))
 {
  temp[0]=down[1][1].color;
  down[1][1].color=down[1][3].color;
  down[1][3].color=down[3][3].color;
  down[3][3].color=down[3][1].color;
  down[3][1].color=temp[0];

  temp[0]=down[1][2].color;
  down[1][2].color=down[2][3].color;
  down[2][3].color=down[3][2].color;
  down[3][2].color=down[2][1].color;
  down[2][1].color=temp[0];

  for (i=1;i<=3;i++)
  {
   temp[i]=left[3][i].color;
     left[3][i].color=front[3][i].color;
   front[3][i].color=right[3][i].color;
   right[3][i].color=back[3][i].color;
   back[3][i].color=temp[i];
  }
 }
 else if (!strcmp(chBuf.ch,"D2"))
 {
  temp[0]=down[1][1].color;
  down[1][1].color=down[3][3].color;
  down[3][3].color=temp[0];

  temp[0]=down[3][1].color;
  down[3][1].color=down[1][3].color;
  down[1][3].color=temp[0];

  temp[0]=down[2][1].color;
  down[2][1].color=down[2][3].color;
  down[2][3].color=temp[0];

  temp[0]=down[1][2].color;
  down[1][2].color=down[3][2].color;
  down[3][2].color=temp[0];

  for (i=1;i<=3;i++)
  {
   temp[i]=left[3][i].color;
   left[3][i].color=right[3][i].color;
   right[3][i].color=temp[i];

   temp[i]=front[3][i].color;
   front[3][i].color=back[3][i].color;
   back[3][i].color=temp[i];
  }
 }
 //����ֱ�˳ʱ����ת90��L0,��ʱ����ת90��L1��˳ʱ����ת180��L2
 else if (!strcmp(chBuf.ch,"L0"))
 {
  //�޸��������ɫֵ
  temp[0]=left[1][1].color;
       left[1][1].color=left[3][1].color;
  left[3][1].color=left[3][3].color;
  left[3][3].color=left[1][3].color;
  left[1][3].color=temp[0];

  temp[0]=left[1][2].color;
  left[1][2].color=left[2][1].color;
  left[2][1].color=left[3][2].color;
  left[3][2].color=left[2][3].color;
  left[2][3].color=temp[0];

  //�޸�����ǰ���ĸ������ɫֵ
  for (i=1,j=3;i<=3,j>=1;i++,j--)
  {
   temp[i]=up[i][1].color;
   up[i][1].color=back[j][3].color;
   back[j][3].color=down[i][1].color;
   down[i][1].color=front[i][1].color;
   front[i][1].color=temp[i];
  }
 }
 else if (!strcmp(chBuf.ch,"L1"))
 {
  temp[0]=left[1][1].color;
  left[1][1].color=left[1][3].color;
  left[1][3].color=left[3][3].color;
  left[3][3].color=left[3][1].color;
  left[3][1].color=temp[0];

  temp[0]=left[1][2].color;
  left[1][2].color=left[2][3].color;
  left[2][3].color=left[3][2].color;
  left[3][2].color=left[2][1].color;
  left[2][1].color=temp[0];

  for (i=1,j=3;i<=3,j>=1;i++,j--)
  {
   temp[i]=up[i][1].color;
     up[i][1].color=front[i][1].color;
   front[i][1].color=down[i][1].color;
   down[i][1].color=back[j][3].color;
   back[j][3].color=temp[i];
  }
 }
 else if (!strcmp(chBuf.ch,"L2"))
 {
  temp[0]=left[1][1].color;
  left[1][1].color=left[3][3].color;
  left[3][3].color=temp[0];

  temp[0]=left[3][1].color;
  left[3][1].color=left[1][3].color;
  left[1][3].color=temp[0];

  temp[0]=left[2][1].color;
  left[2][1].color=left[2][3].color;
  left[2][3].color=temp[0];

  temp[0]=left[1][2].color;
  left[1][2].color=left[3][2].color;
  left[3][2].color=temp[0];

  for (i=1,j=3;i<=3,j>=1;i++,j--)
  {
   temp[i]=up[i][1].color;
   up[i][1].color=down[i][1].color;
   down[i][1].color=temp[i];

   temp[i]=front[i][1].color;
   front[i][1].color=back[j][3].color;
   back[j][3].color=temp[i];
  }
 }
   //����ֱ�˳ʱ����ת90��L0,��ʱ����ת90��L1��˳ʱ����ת180��L2
 else if (!strcmp(chBuf.ch,"R0"))
 {
  //�޸��������ɫֵ
  temp[0]=right[1][1].color;
       right[1][1].color=right[3][1].color;
  right[3][1].color=right[3][3].color;
  right[3][3].color=right[1][3].color;
  right[1][3].color=temp[0];

  temp[0]=right[1][2].color;
  right[1][2].color=right[2][1].color;
  right[2][1].color=right[3][2].color;
  right[3][2].color=right[2][3].color;
  right[2][3].color=temp[0];

  //�޸�����ǰ���ĸ������ɫֵ
  for (i=1,j=3;i<=3,j>=1;i++,j--)
  {
   temp[i]=up[i][3].color;
   up[i][3].color=front[i][3].color;
   front[i][3].color=down[i][3].color;
   down[i][3].color=back[j][1].color;
   back[j][1].color=temp[i];
  }
 }
 else if (!strcmp(chBuf.ch,"R1"))
 {
  temp[0]=right[1][1].color;
  right[1][1].color=right[1][3].color;
  right[1][3].color=right[3][3].color;
  right[3][3].color=right[3][1].color;
  right[3][1].color=temp[0];

  temp[0]=right[1][2].color;
  right[1][2].color=right[2][3].color;
  right[2][3].color=right[3][2].color;
  right[3][2].color=right[2][1].color;
  right[2][1].color=temp[0];

  for (i=1,j=3;i<=3,j>=1;i++,j--)
  {
   temp[i]=up[i][3].color;
     up[i][3].color=back[j][1].color;
   back[j][1].color=down[i][3].color;
   down[i][3].color=front[i][3].color;
   front[i][3].color=temp[i];
  }
 }
 else if (!strcmp(chBuf.ch,"R2"))
 {
  temp[0]=right[1][1].color;
  right[1][1].color=right[3][3].color;
  right[3][3].color=temp[0];

  temp[0]=right[3][1].color;
  right[3][1].color=right[1][3].color;
  right[1][3].color=temp[0];

  temp[0]=right[2][1].color;
  right[2][1].color=right[2][3].color;
  right[2][3].color=temp[0];

  temp[0]=right[1][2].color;
  right[1][2].color=right[3][2].color;
  right[3][2].color=temp[0];

  for (i=1,j=3;i<=3,j>=1;i++,j--)
  {
   temp[i]=up[i][3].color;
   up[i][3].color=down[i][3].color;
   down[i][3].color=temp[i];

   temp[i]=front[i][3].color;
   front[i][3].color=back[j][1].color;
   back[j][1].color=temp[i];
  }
 }
   //ǰ��ֱ�˳ʱ����ת90��F0,��ʱ����ת90��F1��˳ʱ����ת180��F2
 else if (!strcmp(chBuf.ch,"F0"))
 {
  //�޸�ǰ�����ɫֵ
  temp[0]=front[1][1].color;
       front[1][1].color=front[3][1].color;
  front[3][1].color=front[3][3].color;
  front[3][3].color=front[1][3].color;
  front[1][3].color=temp[0];

  temp[0]=front[1][2].color;
  front[1][2].color=front[2][1].color;
  front[2][1].color=front[3][2].color;
  front[3][2].color=front[2][3].color;
  front[2][3].color=temp[0];

  //�޸����������ĸ������ɫֵ
  for (i=1,j=3;i<=3,j>=1;i++,j--)
  {
   temp[i]=up[3][i].color;
     up[3][i].color=left[j][3].color;
     left[j][3].color=down[1][j].color;
     down[1][j].color=right[i][1].color;
     right[i][1].color=temp[i];
  }
 }
 else if (!strcmp(chBuf.ch,"F1"))
 {
  temp[0]=front[1][1].color;
  front[1][1].color=front[1][3].color;
  front[1][3].color=front[3][3].color;
  front[3][3].color=front[3][1].color;
  front[3][1].color=temp[0];

  temp[0]=front[1][2].color;
  front[1][2].color=front[2][3].color;
  front[2][3].color=front[3][2].color;
  front[3][2].color=front[2][1].color;
  front[2][1].color=temp[0];
  
    //�޸����������ĸ������ɫֵ
  for (i=1,j=3;i<=3,j>=1;i++,j--)
  {
   temp[i]=up[3][i].color;
   up[3][i].color=right[i][1].color;
   right[i][1].color=down[1][j].color;
   down[1][j].color=left[j][3].color;
   left[j][3].color=temp[i];
  }
 }
 else if (!strcmp(chBuf.ch,"F2"))
 {
  temp[0]=front[1][1].color;
  front[1][1].color=front[3][3].color;
  front[3][3].color=temp[0];

  temp[0]=front[3][1].color;
  front[3][1].color=front[1][3].color;
  front[1][3].color=temp[0];

  temp[0]=front[2][1].color;
  front[2][1].color=front[2][3].color;
  front[2][3].color=temp[0];

  temp[0]=front[1][2].color;
  front[1][2].color=front[3][2].color;
  front[3][2].color=temp[0];

  //�޸����������ĸ������ɫֵ
  for(i=1,j=3;i<=3,j>=1;i++,j--)
  {
   temp[i]=up[3][i].color;
   up[3][i].color=down[1][j].color;
   down[1][j].color=temp[i];
   
   temp[i]=left[i][3].color;
   left[i][3].color=right[j][1].color;
   right[j][1].color=temp[i];
  }
 }
 //����ֱ�˳ʱ����ת90��F0,��ʱ����ת90��F1��˳ʱ����ת180��F2
 else if (!strcmp(chBuf.ch,"B0"))
 {
  //�޸ĺ������ɫֵ
  temp[0]=back[1][1].color;
       back[1][1].color=back[3][1].color;
  back[3][1].color=back[3][3].color;
  back[3][3].color=back[1][3].color;
  back[1][3].color=temp[0];

  temp[0]=back[1][2].color;
  back[1][2].color=back[2][1].color;
  back[2][1].color=back[3][2].color;
  back[3][2].color=back[2][3].color;
  back[2][3].color=temp[0];

  //�޸����������ĸ������ɫֵ
  for (i=1,j=3;i<=3,j>=1;i++,j--)
  {
   temp[i]=up[1][i].color;
   up[1][i].color=right[i][3].color;
   right[i][3].color=down[3][j].color;
   down[3][j].color=left[j][1].color;
   left[j][1].color=temp[i];
  }
 }
 else if (!strcmp(chBuf.ch,"B1"))
 {
  temp[0]=back[1][1].color;
  back[1][1].color=back[1][3].color;
  back[1][3].color=back[3][3].color;
  back[3][3].color=back[3][1].color;
  back[3][1].color=temp[0];

  temp[0]=back[1][2].color;
  back[1][2].color=back[2][3].color;
  back[2][3].color=back[3][2].color;
  back[3][2].color=back[2][1].color;
  back[2][1].color=temp[0];
  
    //�޸����������ĸ������ɫֵ
  for (i=1,j=3;i<=3,j>=1;i++,j--)
  {
   temp[i]=up[1][i].color;
   up[1][i].color=left[j][1].color;
   left[j][1].color=down[3][j].color;
           down[3][j].color=right[i][3].color;
   right[i][3].color=temp[i];
  }
 }
 else if (!strcmp(chBuf.ch,"B2"))
 {
  temp[0]=back[1][1].color;
  back[1][1].color=back[3][3].color;
  back[3][3].color=temp[0];

  temp[0]=back[3][1].color;
  back[3][1].color=back[1][3].color;
  back[1][3].color=temp[0];

  temp[0]=back[2][1].color;
  back[2][1].color=back[2][3].color;
  back[2][3].color=temp[0];

  temp[0]=back[1][2].color;
  back[1][2].color=back[3][2].color;
  back[3][2].color=temp[0];

  //�޸����������ĸ������ɫֵ
  for(i=1,j=3;i<=3,j>=1;i++,j--)
  {
   temp[i]=up[1][i].color;
   up[1][i].color=down[3][j].color;
   down[3][j].color=temp[i];
   
   temp[i]=left[i][1].color;
   left[i][1].color=right[j][3].color;
   right[j][3].color=temp[i];
  }
 }
}
void PrintMagicCube(MagicCube Magic[][4])
{
 //�����ԭ��ħ�����������ɫֵ
 int i,j;
 for (i=1;i<=3;i++)
 {
  for (j=1;j<=3;j++)
  {
   printf("%d ",Magic[i][j].color);
  }
 // printf("\n");
 }
}
                
