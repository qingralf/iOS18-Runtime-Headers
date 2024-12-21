/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLJournalManagerCore : NSObject {
    NSURL * _baseURL;
    NSURL * _historyTokenURL;
    NSString * _name;
    NSMutableSet * _payloadClassIDs;
    NSArray * _payloadClasses;
    NSMutableDictionary * _payloadClassesByAdditionalEntityName;
    NSMutableDictionary * _payloadClassesByEntityName;
    NSMutableDictionary * _payloadClassesByPayloadClassID;
}

@property (readonly) NSURL *baseURL;
@property (readonly) NSURL *historyTokenURL;
@property (readonly) NSString *name;
@property (readonly) NSSet *payloadClassIDs;
@property (readonly) NSArray *payloadClasses;

- (void).cxx_destruct;
- (id)_nextValidPayloadWithObjectEnumerator:(id)arg1 changedKeys:(id)arg2 payloadClass:(Class)arg3;
- (id)_objectEnumeratorForJournal:(id)arg1 usingManagedObjectContext:(id)arg2 error:(id*)arg3;
- (bool)appendSnapshotWithJournal:(id)arg1 usingManagedObjectContext:(id)arg2 changedKeys:(id)arg3 entryLimit:(unsigned long long)arg4 error:(id*)arg5;
- (id)baseURL;
- (bool)createSnapshotWithJournal:(id)arg1 createOnlyIfNecessary:(bool)arg2 usingManagedObjectContext:(id)arg3 entryLimit:(unsigned long long)arg4 error:(id*)arg5;
- (id)historyTokenURL;
- (id)init;
- (id)initWithName:(id)arg1 baseURL:(id)arg2 payloadClasses:(id)arg3;
- (id)name;
- (Class)payloadClassForPayloadClassID:(id)arg1;
- (id)payloadClassIDs;
- (id)payloadClasses;
- (id)payloadClassesForAdditionalEntityName:(id)arg1;
- (id)payloadClassesForEntityName:(id)arg1;
- (id)readHistoryTokenWithError:(id*)arg1;
- (void)removeHistoryToken;
- (bool)saveHistoryToken:(id)arg1 error:(id*)arg2;
- (void)validatePayloadClassesForManagedObjectModel:(id)arg1;

@end