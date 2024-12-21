/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeadphoneConfigs.framework/HeadphoneConfigs
 */

@interface HPSListeningModeControl : PSTableCell {
    bool  _autoANCSupported;
    <BluetoothDeviceProtocol> * _device;
    UILabel * _labelAutoANC;
    UILabel * _labelNoiseCancellation;
    UILabel * _labelOff;
    UILabel * _labelTransparency;
    UILabel * _labelUnableToSetListeningMode;
    NSMutableArray * _modeControlLabelXPositionConstraints;
    bool  _modeOffSupported;
    UISegmentedControl * _segmentedControl;
}

@property (nonatomic) bool autoANCSupported;
@property (nonatomic, retain) <BluetoothDeviceProtocol> *device;
@property (nonatomic, retain) NSMutableArray *modeControlLabelXPositionConstraints;
@property (nonatomic) bool modeOffSupported;

- (void).cxx_destruct;
- (void)_handleListeningModeSetFailure:(int)arg1 index:(long long)arg2;
- (long long)_indexForMode:(int)arg1;
- (id)_locKeyForFailedToSelectIndex:(long long)arg1;
- (int)_modeForIndex:(long long)arg1;
- (void)_updateLabelLayoutForBounds;
- (double)_validSegmentCount;
- (void)addModeLabels;
- (void)addModeOptions;
- (bool)autoANCSupported;
- (id)device;
- (long long)getIndexFromListeningMode:(int)arg1;
- (int)getListeningModeFromIndex:(long long)arg1;
- (id)getListeningModeString:(int)arg1;
- (void)initCommon;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)modeControlLabelXPositionConstraints;
- (bool)modeOffSupported;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)refreshListeningMode;
- (void)resetUI;
- (void)segmentControlValueChanged:(id)arg1;
- (void)setAutoANCSupported:(bool)arg1;
- (void)setDevice:(id)arg1;
- (void)setModeControlLabelXPositionConstraints:(id)arg1;
- (void)setModeOffSupported:(bool)arg1;
- (void)settingsChangedHandler:(id)arg1;
- (void)setupConstraints;
- (void)startObservingOffModeChanges:(id)arg1;
- (bool)updateModeOffSupported:(id)arg1;

@end