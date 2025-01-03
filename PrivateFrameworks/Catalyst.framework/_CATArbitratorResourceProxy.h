/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface _CATArbitratorResourceProxy : NSProxy <CATArbitratorProxy> {
    bool  _isExclusive;
    _CATArbitratorRegistrationEntry * mRegistration;
    id  mResource;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isExclusive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithResource:(id)arg1 registration:(id)arg2 exclusive:(bool)arg3;
- (void)invalidate;
- (bool)isExclusive;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end
