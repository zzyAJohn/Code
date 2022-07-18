void union(List &La, List Lb)
{
    La_len=ListLength(La);
    La_len=ListLength(Lb);
    for(i=1;i<Lb_len;i++)
    {
        GetElem(Lb,i,e);
        if(!LocateElem(La,e,equal))
        ListInsert(La,++La_len,e);
    }
}