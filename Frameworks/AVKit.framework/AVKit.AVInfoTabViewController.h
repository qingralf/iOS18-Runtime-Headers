/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVKit.AVInfoTabViewController : UIViewController {
    void actions;
    void hostingController;
    void itemsKVOToken;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  metadata;
    void playerItem;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, retain) AVPlayerItem *playerItem;

- (void).cxx_destruct;
- (id)actions;
- (id)avkit_infoPanelKindIdentifier;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPlayerItem:(id)arg1 actions:(id)arg2;
- (id)playerItem;
- (void)setActions:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end