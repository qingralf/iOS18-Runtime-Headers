/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
 */

@interface _CRSPassthroughService : NSObject <CRSCardServing, CRSIdentifiedServing>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *serviceIdentifier;
@property (readonly) Class superclass;

- (bool)canSatisfyCardRequest:(id)arg1;
- (void)requestCard:(id)arg1 reply:(id /* block */)arg2;
- (id)serviceIdentifier;
- (unsigned long long)servicePriorityForRequest:(id)arg1;

@end
