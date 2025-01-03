/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVCloudServiceAPITokenRequest : SSRequest <SSXPCCoding> {
    NSString * _clientToken;
}

@property (nonatomic, readonly, copy) NSString *clientToken;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientToken;
- (id)copyXPCEncoding;
- (id)initWithClientToken:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end
