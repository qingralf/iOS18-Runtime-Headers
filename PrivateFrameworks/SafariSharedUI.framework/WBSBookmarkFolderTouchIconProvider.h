/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSBookmarkFolderTouchIconProvider : NSObject <WBSSiteMetadataProvider> {
    NSMutableDictionary * _bookmarkFolderIdentifiersToRequestSets;
    NSMutableDictionary * _folderUUIDsToTouchIconInfo;
    NSObject<OS_dispatch_queue> * _internalQueue;
    <WBSSiteMetadataProviderDelegate> * _providerDelegate;
    NSMutableDictionary * _requestsToRequestInfos;
}

@property (nonatomic, readonly) NSArray *allFolderUUIDs;
@property (readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) WBSBookmarkFolderTouchIconConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property <WBSSiteMetadataProviderDelegate> *providerDelegate;
@property (nonatomic, readonly) bool providesFavicons; /* unknown property attribute: ? */
@property (readonly) Class superclass;

+ (bool)_appUsesLeftToRightLayout;

- (void).cxx_destruct;
- (id)_arrayByPaddingArray:(id)arg1 toMaximumNumberOfThumbnailsWithObject:(id)arg2;
- (void)_coalesceResponseDispatchForRequest:(id)arg1;
- (void)_dispatchResponseForRequest:(id)arg1;
- (void)_dispatchResponseForRequest:(id)arg1 touchIcon:(id)arg2;
- (id)_drawTouchIconForRequest:(id)arg1;
- (void)_prepareResponseForRequest:(id)arg1 allowDelayedResponse:(bool)arg2;
- (void)_registerInfo:(id)arg1 forRequest:(id)arg2;
- (void)_stopWatchingUpdatesForRequests:(id)arg1;
- (id)allFolderUUIDs;
- (id)backgroundColor;
- (id)cachedImageForFolderUUID:(id)arg1;
- (bool)canHandleRequest:(id)arg1;
- (bool)canProvideUpdatesForRequest:(id)arg1;
- (id)configuration;
- (void)contentOfFolderDidUpdateWithUUID:(id)arg1;
- (id)defaultFolderIconForRequest:(id)arg1;
- (void)didCreateTouchIcon:(id)arg1;
- (id)folderUUIDForRequest:(id)arg1;
- (id)init;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(bool)arg2;
- (id)providerDelegate;
- (void)requestsWithFolderUUIDsDidBecomeInvalid:(id)arg1;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(bool*)arg2;
- (void)setProviderDelegate:(id)arg1;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (id)subrequestsForRequest:(id)arg1 maximumNumberOfSubrequests:(unsigned long long)arg2;

@end
