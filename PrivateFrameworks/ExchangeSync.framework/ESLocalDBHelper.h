/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/ExchangeSync
 */

@interface ESLocalDBHelper : NSObject {
    int  _abConnectionCount;
    void * _abDB;
    NSObject<OS_dispatch_queue> * _abDBQueue;
    int  _calConnectionCount;
    struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; unsigned long long x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; bool x50; } * _calDB;
    ESCalDBHelper * _calDBHelper;
    NSObject<OS_dispatch_queue> * _calDBQueue;
    id /* block */  _calUnitTestCallbackBlock;
    NSString * _clientIdentifier;
    CNContactStore * _contactStore;
    int  _noteConnectionCount;
    NoteContext * _noteDB;
    NSObject<OS_dispatch_queue> * _noteDBQueue;
    NSMutableArray * _saveRequests;
}

@property (nonatomic) int abConnectionCount;
@property (nonatomic) void*abDB;
@property (nonatomic) int calConnectionCount;
@property (nonatomic) struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; unsigned long long x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; bool x50; }*calDB;
@property (nonatomic, retain) ESCalDBHelper *calDBHelper;
@property (nonatomic, copy) id /* block */ calUnitTestCallbackBlock;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic) int noteConnectionCount;
@property (nonatomic, retain) NoteContext *noteDB;
@property (nonatomic, retain) NSMutableArray *saveRequests;

+ (void)abSetTestABDBDir:(id)arg1;
+ (id)abTestABDBDir;
+ (void)calSetTestCalDBDir:(id)arg1;
+ (id)calTestCalDBDir;
+ (id)os_log;
+ (id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2;

- (void).cxx_destruct;
- (bool)_abOpenDBWithClientIdentifier:(id)arg1;
- (void)_registerForAddressBookYieldNotifications;
- (bool)abCloseDBAndSave:(bool)arg1;
- (int)abConnectionCount;
- (id)abConstraintPlistPath;
- (void*)abDB;
- (void*)abDBThrowOnNil:(bool)arg1;
- (void)abOpenDBAsGenericClient;
- (void)abOpenDBWithClientIdentifier:(id)arg1;
- (void)abProcessAddedImages;
- (void)abProcessAddedRecords;
- (bool)abSaveDB;
- (void)addSaveRequest:(id)arg1;
- (bool)calCloseDatabaseForAccountID:(id)arg1 save:(bool)arg2;
- (bool)calCloseDatabaseForAuxDatabaseRef:(void*)arg1 save:(bool)arg2;
- (int)calConnectionCount;
- (struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; unsigned long long x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; bool x50; }*)calDB;
- (id)calDBHelper;
- (struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; unsigned long long x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; bool x50; }*)calDatabaseForAccountID:(id)arg1;
- (struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; unsigned long long x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; bool x50; }*)calDatabaseForAuxDatabaseRef:(void*)arg1;
- (void)calOpenDatabaseAsGenericClientForAccountID:(id)arg1;
- (void)calOpenDatabaseAsGenericClientForAuxDatabaseRef:(void*)arg1;
- (void)calOpenDatabaseForAccountID:(id)arg1 clientID:(id)arg2;
- (void)calOpenDatabaseForAuxDatabaseRef:(void*)arg1 clientID:(id)arg2;
- (bool)calSaveDatabaseAndFlushCachesForAccountID:(id)arg1;
- (bool)calSaveDatabaseForAccountID:(id)arg1;
- (bool)calSaveDatabaseForAuxDatabaseRef:(void*)arg1;
- (id /* block */)calUnitTestCallbackBlock;
- (void)calUnitTestsSetCallbackBlockForSave:(id /* block */)arg1;
- (id)changeTrackingID;
- (id)clientIdentifier;
- (id)contactStore;
- (void)dealloc;
- (void)executeAllSaveRequests;
- (id)init;
- (bool)noteCloseDBAndSave:(bool)arg1;
- (int)noteConnectionCount;
- (id)noteDB;
- (void)noteOpenDB;
- (bool)noteSaveDB;
- (id)saveRequests;
- (void)setAbConnectionCount:(int)arg1;
- (void)setAbDB:(void*)arg1;
- (void)setCalConnectionCount:(int)arg1;
- (void)setCalDB:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; unsigned long long x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; bool x50; }*)arg1;
- (void)setCalDBHelper:(id)arg1;
- (void)setCalUnitTestCallbackBlock:(id /* block */)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setNoteConnectionCount:(int)arg1;
- (void)setNoteDB:(id)arg1;
- (void)setSaveRequests:(id)arg1;
- (bool)useContacts;

@end
