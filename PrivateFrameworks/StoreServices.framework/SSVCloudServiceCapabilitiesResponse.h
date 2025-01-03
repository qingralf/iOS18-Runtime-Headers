/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVCloudServiceCapabilitiesResponse : NSObject <NSCopying, SSXPCCoding> {
    bool  _canSubscribeToMusicCatalog;
    SSVSubscriptionStatus * _subscriptionStatus;
    bool  _supportsAddToCloudMusicLibrary;
    bool  _supportsMusicCatalogPlayback;
}

@property (nonatomic) bool canSubscribeToMusicCatalog;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) SSVSubscriptionStatus *subscriptionStatus;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsAddToCloudMusicLibrary;
@property (nonatomic) bool supportsMusicCatalogPlayback;

- (void).cxx_destruct;
- (id)_descriptionWithSubscriptionStatusDescriptorBlock:(id /* block */)arg1;
- (bool)canSubscribeToMusicCatalog;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)debugDescription;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setCanSubscribeToMusicCatalog:(bool)arg1;
- (void)setSubscriptionStatus:(id)arg1;
- (void)setSupportsAddToCloudMusicLibrary:(bool)arg1;
- (void)setSupportsMusicCatalogPlayback:(bool)arg1;
- (id)subscriptionStatus;
- (bool)supportsAddToCloudMusicLibrary;
- (bool)supportsMusicCatalogPlayback;

@end
