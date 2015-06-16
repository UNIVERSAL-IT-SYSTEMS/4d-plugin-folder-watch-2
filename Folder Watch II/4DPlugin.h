/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : Folder Watch II
 #	author : miyako
 #	2015/06/16
 #
 # --------------------------------------------------------------------------------*/



// --- Settings
void FW_Set_watch_path(sLONG_PTR *pResult, PackagePtr pParams);
void FW_GET_WATCH_PATHS(sLONG_PTR *pResult, PackagePtr pParams);
void FW_Set_watch_method(sLONG_PTR *pResult, PackagePtr pParams);
void FW_Get_watch_method(sLONG_PTR *pResult, PackagePtr pParams);
void FW_Set_watch_paths(sLONG_PTR *pResult, PackagePtr pParams);

void listenerInit(void);
void listenerLoop(void);
void listenerLoopStart(void);
void listenerLoopFinish(void);
void listenerLoopExecute(void);
void listenerLoopExecuteMethod(void);

//internal variable

typedef PA_long32 process_number_t;
typedef PA_long32 process_stack_size_t;
typedef PA_long32 method_id_t;
typedef PA_Unichar* process_name_t;