/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPerformChangesRequest : PLXPCObject <PHPerformChangesRequest, PLPerformChangesRequest, PLPerformChangesRequestService> {
    NSMutableDictionary * _changeRequestsByUUID;
    NSMutableOrderedSet * _deletes;
    NSMutableOrderedSet * _failedOnDemandRequests;
    bool  _inService;
    NSMutableOrderedSet * _inserts;
    PHPerformChangesInstrumentation * _instrumentation;
    unsigned long long  _libraryRole;
    NSMutableOrderedSet * _otherChangeHandlers;
    NSMutableOrderedSet * _otherChangeRequests;
    NSArray * _otherChanges;
    <PLPerformChangesRequestService> * _service;
    NSMutableOrderedSet * _updates;
}

@property (nonatomic, readonly) long long accessLevel;
@property (nonatomic, readonly) long long accessScopeOptionsRequiredForRequestedChanges;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly) NSOrderedSet *deletes;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasChangeRequests;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSOrderedSet *inserts;
@property (nonatomic, retain) PHPerformChangesInstrumentation *instrumentation;
@property (nonatomic) unsigned long long libraryRole;
@property (nonatomic, readonly) NSOrderedSet *otherChangeRequests;
@property (nonatomic, readonly) NSArray *requestSets;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSOrderedSet *updates;

+ (bool)supportsSecureCoding;
+ (struct _xpc_type_s { }*)type;

- (void).cxx_destruct;
- (id)_allChangeRequests;
- (id)_failureWithError:(id)arg1;
- (bool)_isSupportedLimitedLibraryChangeRequest:(id)arg1;
- (long long)accessLevel;
- (long long)accessScopeOptionsRequiredForRequestedChanges;
- (id)changeRequestForUUID:(id)arg1;
- (id)clientBundleID;
- (id)clientDescription;
- (id)clientDisplayName;
- (void)decodeWithService:(id)arg1 clientAuthorization:(id)arg2;
- (id)deletes;
- (id)description;
- (long long)determineAuthorizationStatusForChanges;
- (void)didSendChangesToServiceWithResult:(bool)arg1;
- (void)discardUnsupportedLimitedLibraryChangeRequests;
- (void)encodeWithCoder:(id)arg1;
- (id)errorWithLocalizedDescription:(id)arg1;
- (void)executeWithLibraryServicesManager:(id)arg1 libraryName:(const char *)arg2 executionContext:(id)arg3 reply:(id /* block */)arg4;
- (void)executeWithService:(id)arg1 reply:(id /* block */)arg2;
- (bool)hasChangeRequests;
- (bool)hasObjectChangeRequests;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCCoder:(id)arg1;
- (id)inserts;
- (id)instrumentation;
- (unsigned long long)libraryRole;
- (id)libraryServicesManager;
- (void)notifyChangesTransactionFailedWithLazyPhotoLibrary:(id)arg1 error:(id)arg2;
- (id)otherChangeRequests;
- (id)persistentStoreCoordinator;
- (void)recordDeleteRequest:(id)arg1;
- (void)recordFailedOnDemandRequest:(id)arg1;
- (void)recordInsertRequest:(id)arg1;
- (void)recordOtherChangeRequest:(id)arg1;
- (void)recordUpdateRequest:(id)arg1;
- (id)requestSets;
- (id)serviceHandlerForChanges:(id)arg1 clientAuthorization:(id)arg2;
- (void)setChangeRequest:(id)arg1 forUUID:(id)arg2;
- (void)setInstrumentation:(id)arg1;
- (void)setLibraryRole:(unsigned long long)arg1;
- (id)updates;

@end