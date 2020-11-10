#include <iostream>
using namespace std;

int Median(const int data[])
{
    //data[0],data[1],data[2],data[3],data[4] 
    //data[0], data[1], data[2], data[3], data[4]
    
    if(data[0]>data[1])
    {
        //data[0]>data[1]
        if(data[2]>data[3])
        {
            //data[0]>data[1], data[2]>data[3]
            if (data[1]>data[2])
            {
                //data[0]>data[1]>data[2]>data[3]
                if (data[3]>data[4])
                {
                    //data[0]>data[1]>data[2]>data[3]>data[4]
                    return data[2];
                }
                else
                {
                    //data[0]>data[1]>data[2]>data[3], data[4]>data[3]
                    if (data[2]>data[4])
                    {
                        //data[0]>data[1]>data[2]>data[4]>data[3]
                        return data[2];
                    }
                    else
                    {
                        //data[0]>data[1]>data[2], data[4]>data[2]>data[3]
                        if (data[1]>data[4])
                        {
                            //data[0]>data[1]>data[4]>data[2]>data[3]
                            return data[4];
                        }
                        else
                        {
                            //data[0]>data[1], data[4]>data[1]>data[2]>data[3]
                            if(data[0]>data[4])
                            {
                                //data[0]>data[4]>data[1]>data[2]>data[3]
                                return data[1];
                            }
                            else
                            {
                                //data[4]>data[0]>data[1]>data[2]>data[3]
                                return data[1];
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            else
            {
                //data[0]>data[2]>data[1], data[2]>data[3]
                if (data[1]>data[3])
                {
                    //data[0]>data[2]>data[1]>data[3]
                    if(data[3]>data[4])
                    {
                        //data[0]>data[2]>data[1]>data[3]>data[4]
                        return data[1];
                    }
                    else
                    {
                        //data[0]>data[2]>data[1]>data[3], data[4]>data[3]
                        if(data[4]>data[1])
                        {
                            //data[0]>data[2], data[4]>data[1]>data[3]
                            if(data[4]>data[2])
                            {
                                //data[0], data[4]>data[2]>data[1]>data[3]
                                if (data[4]>data[0])
                                {
                                    //data[4]>data[0]>data[2]>data[1]>data[3]
                                    return data[2];
                                }
                                else
                                {
                                    //data[0]>data[4]>data[2]>data[1]>data[3]
                                    return data[2];
                                }
                                
                            }
                            else
                            {
                                //data[0]>data[2]>data[4]>data[1]>data[3]
                                return data[2];
                            }
                            
                        }
                        else
                        {
                            //data[0]>data[2]>data[1]>data[4]>data[3]
                            return data[1];
                        }

                    }
                    
                }
                else
                {
                    //data[0]>data[2]>data[3]>data[1]
                    if (data[1]>data[4])
                    {
                        //data[0]>data[2]>data[3]>data[1]>data[4]
                        return data[3];
                    }
                    else
                    {
                        //data[0]>data[2]>data[3]>data[1], data[4]>data[1]
                        if(data[4]>data[3])
                        {
                            //data[0]>data[2], data[4]>data[3]>data[1]
                            if(data[4]>data[2])
                            {
                                //data[0], data[4]>data[2]>data[3]>data[1]
                                if(data[4]>data[0])
                                {
                                    //data[4]>data[0]>data[2]>data[3]>data[1]
                                    return data[2];
                                }
                                else
                                {
                                    //data[0]>data[4]>data[2]>data[3]>data[1]
                                    return data[2];
                                }
                                
                            }
                            else
                            {
                                //data[0]>data[2]>data[4]>data[3]>data[1]
                                return data[4];
                            }
                            
                        }
                        else
                        {
                            //data[0]>data[2]>data[3]>data[4]>data[1]
                            return data[3];
                        }
                        
                    }
                }
            }            
        }
        else
        {
            //data[0]>data[1], data[3]>data[2]
            if(data[1]>data[3])
            {
                //data[0]>data[1]>data[3]>data[2]
                if(data[2]>data[4])
                {
                    //data[0]>data[1]>data[3]>data[2]>data[4]
                    return data[3];
                }
                else
                {
                    //data[0]>data[1]>data[3], data[4]>data[2]
                    if(data[3]>data[4])
                    {
                        //data[0]>data[1]>data[3]>data[4]>data[2]
                        return data[3];
                    }
                    else
                    {
                        //data[0]>data[1], data[4]>data[3]>data[2]
                        if(data[1]>data[4])
                        {
                            //data[0]>data[1]>data[4]>data[3]>data[2]
                            return data[4];
                        }
                        else
                        {
                            //data[0], data[4]>data[1]>data[3]>data[2]
                            if(data[0]>data[4])
                            {
                                //data[0]>data[4]>data[1]>data[3]>data[2]
                                return data[1];
                            }
                            else
                            {
                                //data[4]>data[0]>data[1]>data[3]>data[2]
                                return data[1];
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            else
            {
                //data[0]>data[1], data[3]>data[1], data[3]>data[2]
                if(data[2]>data[1])
                {
                    //data[0]>data[1], data[3]>data[2]>data[1]
                    if(data[2]>data[0])
                    {
                        //data[3]>data[2]>data[0]>data[1]
                        if(data[1]>data[4])
                        {
                            //data[3]>data[2]>data[0]>data[1]>data[4]
                            return data[0];
                        }
                        else
                        {
                            //data[3]>data[2]>data[0]>data[1], data[4]>data[1]
                            if(data[0]>data[4])
                            {
                                //data[3]>data[2]>data[0]>data[4]>data[1]
                                return data[0];
                            }
                            else
                            {
                                //data[3]>data[2], data[4]>data[0]>data[1]
                                if(data[2]>data[4])
                                {
                                    //data[3]>data[2]>data[4]>data[0]>data[1]
                                    return data[4];
                                }
                                else
                                {
                                    //data[3], data[4]>data[2]>data[0]>data[1]
                                    if(data[3]>data[4])
                                    {
                                        //data[3]>data[4]>data[2]>data[0]>data[1]
                                        return data[2];
                                    }
                                    else
                                    {
                                        //data[4]>data[3]>data[2]>data[0]>data[1]
                                        return data[2];
                                    }
                                    
                                }
                                
                            }
                            
                        } 
                    }
                    else
                    {
                        //data[0]>data[2]>data[1], data[3]>data[2]
                        if(data[0]>data[3])
                        {
                            //data[0]>data[3]>data[2]>data[1]
                            if(data[1]>data[4])
                            {
                                //data[0]>data[3]>data[2]>data[1]>data[4]
                                return data[2];
                            }
                            else
                            {
                                //data[0]>data[3]>data[2], data[4]>data[1]
                                if(data[2]>data[4])
                                {
                                    //data[0]>data[3]>data[2]>data[4]>data[1]
                                    return data[2];
                                }
                                else
                                {
                                    //data[0]>data[3], data[4]>data[2]>data[1]
                                    if(data[3]>data[4])
                                    {
                                        //data[0]>data[3]>data[4]>data[2]>data[1]
                                        return data[4];
                                    }
                                    else
                                    {
                                        //data[0], data[4]>data[3]>data[2]>data[1]
                                        return data[3];
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        else
                        {
                            //data[3]>data[0]>data[2]>data[1]
                            if(data[1]>data[4])
                            {
                                //data[3]>data[0]>data[2]>data[1]>data[4]
                                return data[2];
                            }
                            else
                            {
                                //data[3]>data[0]>data[2] data[4]>data[1]
                                if (data[2]>data[4])
                                {
                                    //data[3]>data[0]>data[2]>data[4]>data[1]
                                    return data[2];
                                }
                                else
                                {
                                    //data[3]>data[0], data[4]>data[2]>data[1]
                                    if(data[0]>data[4])
                                    {
                                        //data[3]>data[0]>data[4]>data[2]>data[1]
                                        return data[4];
                                    }
                                    else
                                    {
                                        //data[3], data[4]>data[0]>data[2]>data[1]
                                        return data[0];
                                    }
                                    
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                }
                else
                {
                    //data[0]>data[1], data[3]>data[1]>data[2]
                    if(data[3]>data[0])
                    {
                        //data[3]>data[0]>data[1]>data[2]
                        if(data[4]>data[2])
                        {
                            //data[3]>data[0]>data[1]>data[2]>data[4]
                            return data[1];

                        }
                        else
                        {
                            //data[3]>data[0]>data[1], data[4]>data[2]
                            if(data[1]>data[4])
                            {
                                //data[3]>data[0]>data[1]>data[4]>data[2]
                                return data[1];
                            }
                            else
                            {
                                //data[3]>data[0], data[4]>data[1]>data[2]
                                if (data[0]>data[4])
                                {
                                    //data[3]>data[0]>data[4]>data[1]>data[2]
                                    return data[4];
                                }
                                else
                                {
                                    //data[3], data[4]>data[0]>data[1]>data[2]
                                    return data[0];
                                }
                                
                            }
                            
                        }
                        
                    }
                    else
                    {
                        //data[0]>data[3]>data[1]>data[2]
                        if(data[2]>data[4])
                        {
                            //data[0]>data[3]>data[1]>data[2]>data[4]
                            return data[1];
                        }
                        else
                        {
                            //data[0]>data[3]>data[1], data[4]>data[2]
                            if(data[1]>data[4])
                            {
                                //data[0]>data[3]>data[1]>data[4]>data[2]
                                return data[1];
                            }
                            else
                            {
                                //data[0]>data[3] data[4]>data[1]>data[2]
                                if(data[3]>data[4])
                                {
                                    //data[0]>data[3]>data[4]>data[1]>data[2]
                                    return data[4];
                                }
                                else
                                {
                                    //data[0]>data[4]>data[3]>data[1]>data[2]
                                    return data[3];
                                }
                                
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
        }   
    }
    else
    {
        //data[0]>data[1]
        if(data[2]>data[3])
        {
            //data[0]>data[1], data[2]>data[3]
            if (data[1]>data[2])
            {
                //data[0]>data[1]>data[2]>data[3]
                if (data[3]>data[4])
                {
                    //data[0]>data[1]>data[2]>data[3]>data[4]
                    return data[2];
                }
                else
                {
                    //data[0]>data[1]>data[2]>data[3], data[4]>data[3]
                    if (data[2]>data[4])
                    {
                        //data[0]>data[1]>data[2]>data[4]>data[3]
                        return data[2];
                    }
                    else
                    {
                        //data[0]>data[1]>data[2], data[4]>data[2]>data[3]
                        if (data[1]>data[4])
                        {
                            //data[0]>data[1]>data[4]>data[2]>data[3]
                            return data[4];
                        }
                        else
                        {
                            //data[0]>data[1], data[4]>data[1]>data[2]>data[3]
                            if(data[0]>data[4])
                            {
                                //data[0]>data[4]>data[1]>data[2]>data[3]
                                return data[1];
                            }
                            else
                            {
                                //data[4]>data[0]>data[1]>data[2]>data[3]
                                return data[1];
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            else
            {
                //data[0]>data[2]>data[1], data[2]>data[3]
                if (data[1]>data[3])
                {
                    //data[0]>data[2]>data[1]>data[3]
                    if(data[3]>data[4])
                    {
                        //data[0]>data[2]>data[1]>data[3]>data[4]
                        return data[1];
                    }
                    else
                    {
                        //data[0]>data[2]>data[1]>data[3], data[4]>data[3]
                        if(data[4]>data[1])
                        {
                            //data[0]>data[2], data[4]>data[1]>data[3]
                            if(data[4]>data[2])
                            {
                                //data[0], data[4]>data[2]>data[1]>data[3]
                                if (data[4]>data[0])
                                {
                                    //data[4]>data[0]>data[2]>data[1]>data[3]
                                    return data[2];
                                }
                                else
                                {
                                    //data[0]>data[4]>data[2]>data[1]>data[3]
                                    return data[2];
                                }
                                
                            }
                            else
                            {
                                //data[0]>data[2]>data[4]>data[1]>data[3]
                                return data[2];
                            }
                            
                        }
                        else
                        {
                            //data[0]>data[2]>data[1]>data[4]>data[3]
                            return data[1];
                        }

                    }
                    
                }
                else
                {
                    //data[0]>data[2]>data[3]>data[1]
                    if (data[1]>data[4])
                    {
                        //data[0]>data[2]>data[3]>data[1]>data[4]
                        return data[3];
                    }
                    else
                    {
                        //data[0]>data[2]>data[3]>data[1], data[4]>data[1]
                        if(data[4]>data[3])
                        {
                            //data[0]>data[2], data[4]>data[3]>data[1]
                            if(data[4]>data[2])
                            {
                                //data[0], data[4]>data[2]>data[3]>data[1]
                                if(data[4]>data[0])
                                {
                                    //data[4]>data[0]>data[2]>data[3]>data[1]
                                    return data[2];
                                }
                                else
                                {
                                    //data[0]>data[4]>data[2]>data[3]>data[1]
                                    return data[2];
                                }
                                
                            }
                            else
                            {
                                //data[0]>data[2]>data[4]>data[3]>data[1]
                                return data[4];
                            }
                            
                        }
                        else
                        {
                            //data[0]>data[2]>data[3]>data[4]>data[1]
                            return data[3];
                        }
                        
                    }
                }
            }            
        }
    }
}

int main() 
{
int data [] = {2,6,3,1,5};
cout<<"The median is "<<Median(data)<<endl;

return 0;
}