/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADDatabaseConnectionPool : NSObject <CADDatabaseConnectionProvider, CalCalendarDatabaseIntegrityErrorReportingDelegate> {
    int  _auxDatabaseSequence;
    NSHashTable * _clients;
    int  _databaseRestoreGeneration;
    NSHashTable * _delegates;
    CADDatabaseInitializationOptions * _initOptions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_workloop> * _lowPriorityTasks;
    <CADDatabaseConnectionPoolManager> * _manager;
    bool  _needCheckAuxDatabaseSequenceAndRestoreGeneration;
    NSMutableDictionary * _pools;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkGenerationAndAuxDatabaseSequence:(bool*)arg1;
- (id)_openDatabases;
- (id)_pools;
- (void)addClient:(id)arg1;
- (void)addCreatedAuxDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; unsigned long long x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; bool x50; }*)arg1;
- (void)addDelegate:(id)arg1;
- (id)createConnectionForPool:(id)arg1;
- (void)databaseChangedExternally:(id)arg1 auxDatabaseID:(int)arg2;
- (int)databaseRestoreGeneration;
- (void)dealloc;
- (void)forEachDelegate:(id /* block */)arg1;
- (id)initWithOptions:(id)arg1 manager:(id)arg2;
- (void)notifyDelegatesGenerationChanged;
- (unsigned long long)numberOfClients;
- (bool)performASAPWithConfiguration:(id)arg1 databaseID:(int)arg2 block:(id /* block */)arg3;
- (void)performWithAllDatabasesWithConfiguration:(id)arg1 priority:(unsigned long long)arg2 block:(id /* block */)arg3;
- (bool)performWithConfiguration:(id)arg1 priority:(unsigned long long)arg2 databaseID:(int)arg3 block:(id /* block */)arg4;
- (void)prepareDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; unsigned long long x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; bool x50; }*)arg1 forUseWithConfiguration:(id)arg2;
- (void)purgeConnectionsLastUsedPriorTo:(unsigned long long)arg1 stats:(struct { int x1; int x2; unsigned long long x3; }*)arg2;
- (void)removeClient:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)reportIntegrityErrors:(id)arg1;
- (void)setupDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; unsigned long long x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; bool x50; }*)arg1;

@end