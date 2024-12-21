/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDContainerProxy : NSProxy <CKPropertiesDescription, CKXPCContainerScopedDaemon, NSDiscardableContent> {
    unsigned long long  _accessCount;
    CKDAppContainerTuple * _appContainerTuple;
    CKCoalescer * _coalescer;
    CKDXPCConnection * _connection;
    CKDContainer * _container;
    <CKXPCContainerScopedClient> * _distantContainer;
    CKEntitlements * _entitlements;
    bool  _inactive;
    CKDLogicalDeviceScopedClientProxy * _logicalDeviceScopedClientProxy;
    bool  _memoryPressure;
    CKContainerOptions * _options;
    CKDContainer * _strongContainer;
}

@property (nonatomic, readonly, copy) CKDAppContainerTuple *appContainerTuple;
@property (nonatomic, readonly) CKDXPCConnection *connection;
@property (readonly) CKDContainer *container;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CKXPCContainerScopedClient> *distantContainer;
@property (nonatomic, readonly, copy) CKEntitlements *entitlements;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CKContainerOptions *options;
@property (readonly) Class superclass;

+ (Class)class;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (id)appContainerTuple;
- (bool)beginContentAccess;
- (void)beginContentAccess:(id /* block */)arg1;
- (Class)class;
- (bool)conformsToProtocol:(id)arg1;
- (id)connection;
- (id)container;
- (void)dealloc;
- (void)discardContentIfPossible;
- (id)distantContainer;
- (void)endContentAccess;
- (id)entitlements;
- (void)forwardInvocation:(id)arg1;
- (void)handleMemoryPressure:(long long)arg1;
- (void)handleMemoryPressure:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)handleMemoryPressureNotification:(id)arg1;
- (id)initWithAppContainerTuple:(id)arg1 entitlements:(id)arg2 options:(id)arg3 distantContainer:(id)arg4 connection:(id)arg5;
- (bool)isContentDiscarded;
- (void)isContentDiscarded:(id /* block */)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isMemberOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)options;

@end