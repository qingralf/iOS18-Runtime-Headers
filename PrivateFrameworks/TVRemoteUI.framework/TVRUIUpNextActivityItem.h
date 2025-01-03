/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface TVRUIUpNextActivityItem : NSObject <UIActivityItemLinkPresentationSource, UIActivityItemSource> {
    NSItemProvider * _imageItemProvider;
    TVRCUTSMediaInfoRequest * _mediaInfoRequest;
    bool  _shareShow;
    TVRCUpNextInfo * _upNextInfo;
    <TVRUIUpNextProviding> * _upNextProvider;
    NSURLSession * _urlSession;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSItemProvider *imageItemProvider;
@property (nonatomic, retain) TVRCUTSMediaInfoRequest *mediaInfoRequest;
@property (nonatomic) bool shareShow;
@property (readonly) Class superclass;
@property (nonatomic, retain) TVRCUpNextInfo *upNextInfo;
@property (nonatomic, retain) <TVRUIUpNextProviding> *upNextProvider;
@property (nonatomic, retain) NSURLSession *urlSession;

- (void).cxx_destruct;
- (id)_shareURL;
- (id)_subtitle;
- (id)_title;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)imageItemProvider;
- (id)initWithUpNextInfo:(id)arg1 upNextProvider:(id)arg2 shareShow:(bool)arg3;
- (id)mediaInfoRequest;
- (void)setImageItemProvider:(id)arg1;
- (void)setMediaInfoRequest:(id)arg1;
- (void)setShareShow:(bool)arg1;
- (void)setUpNextInfo:(id)arg1;
- (void)setUpNextProvider:(id)arg1;
- (void)setUrlSession:(id)arg1;
- (bool)shareShow;
- (id)upNextInfo;
- (id)upNextProvider;
- (id)urlSession;

@end
