/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaSocialPostExternalDestination : NSObject <NSCopying, SSXPCCoding> {
    NSString * _accessToken;
    NSString * _pageAccessToken;
    NSString * _pageIdentifier;
    NSString * _serviceIdentifier;
}

@property (nonatomic, copy) NSString *accessToken;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *pageAccessToken;
@property (nonatomic, copy) NSString *pageIdentifier;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)pageAccessToken;
- (id)pageIdentifier;
- (id)serviceIdentifier;
- (void)setAccessToken:(id)arg1;
- (void)setPageAccessToken:(id)arg1;
- (void)setPageIdentifier:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;

@end