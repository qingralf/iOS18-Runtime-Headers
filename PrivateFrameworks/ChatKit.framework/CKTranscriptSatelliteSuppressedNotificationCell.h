/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptSatelliteSuppressedNotificationCell : CKTranscriptCell <CKTranscriptCollectionViewCellProtocol> {
    UILabel * _satelliteNoNotificationTitleLabel;
    NSAttributedString * _satelliteNoNotificationTitleLabelAttributedText;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *satelliteNoNotificationTitleLabel;
@property (nonatomic, copy) NSAttributedString *satelliteNoNotificationTitleLabelAttributedText;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;
+ (id)satelliteNoNotificationTitleLabel;

- (void).cxx_destruct;
- (void)_fadeInLabelAtStartTime:(double)arg1 completion:(id /* block */)arg2;
- (void)_updateSatelliteNoNotificationTitleLabelAttributedTextAnimated:(bool)arg1;
- (void)addFilter:(id)arg1;
- (id)animationWithKeyPath:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 fromValue:(id)arg4 toValue:(id)arg5;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1 context:(id)arg2 animated:(bool)arg3 animationDuration:(double)arg4 animationCurve:(long long)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)performInsertion:(id /* block */)arg1;
- (id)satelliteNoNotificationTitleLabel;
- (id)satelliteNoNotificationTitleLabelAttributedText;
- (void)setSatelliteNoNotificationTitleLabel:(id)arg1;
- (void)setSatelliteNoNotificationTitleLabelAttributedText:(id)arg1;

@end