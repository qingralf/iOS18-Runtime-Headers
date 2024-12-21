/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari
 */

@interface SFTabSwitcherShareConfiguration : NSObject {
    void wrapped;
}

@property (nonatomic, readonly) NSArray *allCollaborationButtons;
@property (nonatomic, retain) UIView *collaborationButtonForLargeTitle;
@property (nonatomic, retain) UIView *collaborationButtonForNavigationBar;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ shareHandler;

- (void).cxx_destruct;
- (id)allCollaborationButtons;
- (id)collaborationButtonForLargeTitle;
- (id)collaborationButtonForNavigationBar;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 shareHandler:(id /* block */)arg2;
- (void)setCollaborationButtonForLargeTitle:(id)arg1;
- (void)setCollaborationButtonForNavigationBar:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setShareHandler:(id /* block */)arg1;
- (id /* block */)shareHandler;

@end