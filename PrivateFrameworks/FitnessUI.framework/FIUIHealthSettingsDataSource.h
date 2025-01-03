/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIHealthSettingsDataSource : NSObject <FIUIPregnancyStateChangeObserving, UITableViewDataSource> {
    FIUIHealthSettingsTableViewCell * _biologicalSexCell;
    FIUIHealthSettingsTableViewCell * _birthDateCell;
    FIUIHealthSettingsBirthDatePickerController * _birthDatePickerController;
    <FIUIHealthSettingsDataSourceDelegate> * _delegate;
    FIUIHealthSettingsTableViewCell * _heightCell;
    FIUIHealthSettingsHeightPickerController * _heightPickerController;
    FIActivitySettingsController * _preEditSettingsController;
    FIUIHealthSettingsTableViewCell * _pregnancyStateCell;
    FIUIPregnancyStateProvider * _pregnancyStateProvider;
    FIActivitySettingsController * _settingsController;
    FIUIHealthSettingsSexPickerController * _sexPickerController;
    bool  _showPregnancy;
    bool  _showWheelchair;
    FIUIHealthSettingsTableViewCell * _weightCell;
    FIUIHealthSettingsWeightPickerController * _weightPickerController;
    FIUIHealthSettingsTableViewCell * _wheelchairUseCell;
}

@property (nonatomic, retain) FIUIHealthSettingsBirthDatePickerController *birthDatePickerController;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <FIUIHealthSettingsDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FIActivitySettingsController *editedSettingsController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FIUIHealthSettingsHeightPickerController *heightPickerController;
@property (nonatomic, retain) FIActivitySettingsController *settingsController;
@property (nonatomic, retain) FIUIHealthSettingsSexPickerController *sexPickerController;
@property (readonly) Class superclass;
@property (nonatomic, retain) FIUIHealthSettingsWeightPickerController *weightPickerController;

- (void).cxx_destruct;
- (void)_configurePregnancyStateCellForModel:(id)arg1;
- (void)_updateBiologicalSexCell;
- (void)_updateBirthDateCell;
- (void)_updateCells;
- (void)_updateHeightCell;
- (void)_updatePregnancyStateCellWithModel:(id)arg1;
- (void)_updateWeightCell;
- (id)biologicalSexCell;
- (id)birthDateCell;
- (id)birthDatePickerController;
- (void)cellDidBecomeFirstResponder:(id)arg1;
- (void)cellDidResignFirstResponder:(id)arg1;
- (id)delegate;
- (id)editedSettingsController;
- (void)endEditingAndDiscardChanges:(bool)arg1;
- (id)heightCell;
- (id)heightPickerController;
- (id)initWithActivitySettingsController:(id)arg1 showWheelchair:(bool)arg2;
- (id)initWithActivitySettingsController:(id)arg1 showWheelchair:(bool)arg2 pregnancyStateProvider:(id)arg3 showPregnancy:(bool)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pregnancyModelDidChangeWithProvider:(id)arg1 model:(id)arg2;
- (id)pregnancySectionIndexPath;
- (id)pregnancyStateCell;
- (void)setBirthDatePickerController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeightPickerController:(id)arg1;
- (void)setSettingsController:(id)arg1;
- (void)setSexPickerController:(id)arg1;
- (void)setWeightPickerController:(id)arg1;
- (id)settingsController;
- (id)sexPickerController;
- (bool)shouldBypassFirstResponderAction:(id)arg1;
- (bool)shouldHighlightRowAtIndexPath:(id)arg1;
- (void)startEditing;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)weightCell;
- (id)weightPickerController;
- (long long)wheelchairSectionIndex;
- (void)wheelchairSwitchDidChange:(id)arg1;
- (id)wheelchairUseCell;

@end
