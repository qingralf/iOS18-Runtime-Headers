/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
 */

@interface STStatusDomainClientHandleWrapper : NSObject <STStatusDomainClientHandle> {
    NSArray * _preferredLocalizations;
    <STStatusDomainClientHandle> * _wrappedClientHandle;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *preferredLocalizations;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <STStatusDomainClientHandle> *wrappedClientHandle;

- (void).cxx_destruct;
- (id)initWithWrappedClientHandle:(id)arg1 preferredLocalizations:(id)arg2;
- (void)observeData:(id)arg1 forDomain:(unsigned long long)arg2 withChangeContext:(id)arg3;
- (id)preferredLocalizations;
- (id)wrappedClientHandle;

@end
