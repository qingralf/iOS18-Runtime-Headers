/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface TVRUINowPlayingInfoActivityItem : NSObject <UIActivityItemLinkPresentationSource, UIActivityItemSource> {
    NSItemProvider * _imageItemProvider;
    TVRCUTSMediaInfoRequest * _mediaInfoRequest;
    TVRCNowPlayingInfo * _nowPlayingInfo;
    bool  _shareShow;
    NSURLSession * _urlSession;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSItemProvider *imageItemProvider;
@property (nonatomic, retain) TVRCUTSMediaInfoRequest *mediaInfoRequest;
@property (nonatomic, retain) TVRCNowPlayingInfo *nowPlayingInfo;
@property (nonatomic) bool shareShow;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURLSession *urlSession;

- (void).cxx_destruct;
- (id)_shareURL;
- (id)_subtitle;
- (id)_title;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)imageItemProvider;
- (id)initWithNowPlayingInfo:(id)arg1 shareShow:(bool)arg2;
- (id)mediaInfoRequest;
- (id)nowPlayingInfo;
- (void)setImageItemProvider:(id)arg1;
- (void)setMediaInfoRequest:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setShareShow:(bool)arg1;
- (void)setUrlSession:(id)arg1;
- (bool)shareShow;
- (id)urlSession;

@end
