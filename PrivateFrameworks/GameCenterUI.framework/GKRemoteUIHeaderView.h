/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKRemoteUIHeaderView : UIView <RUIHeader> {
    double  _bottomMargin;
    double  _height;
    bool  _isFirstSection;
    GKLabel * _textLabel;
}

@property (nonatomic) double bottomMargin;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height;
@property (nonatomic) bool isFirstSection;
@property (readonly) Class superclass;
@property (nonatomic, retain) GKLabel *textLabel;

- (void).cxx_destruct;
- (double)bottomMargin;
- (double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (double)height;
- (id)initWithAttributes:(id)arg1;
- (bool)isFirstSection;
- (void)setBottomMargin:(double)arg1;
- (void)setHeight:(double)arg1;
- (void)setIsFirstSection:(bool)arg1;
- (void)setSectionIsFirst:(bool)arg1;
- (void)setTextLabel:(id)arg1;
- (id)textLabel;

@end
