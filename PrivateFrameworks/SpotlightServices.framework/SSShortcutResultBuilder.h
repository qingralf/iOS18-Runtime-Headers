/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface SSShortcutResultBuilder : SSResultBuilder {
    NSString * _actionIdentifier;
    NSArray * _alternateNames;
    NSString * _biomeStreamIdentifier;
    NSString * _domainIdentifier;
    unsigned long long  _entityBadgeType;
    unsigned long long  _entityThumbnailDisplayStyle;
    bool  _isAlarmResult;
    bool  _isBackgroundRunnable;
    bool  _isCustomAppAttributedShortcut;
    NSString * _lnPropertyIdentifier;
    NSString * _name;
    NSString * _numberOfActionsString;
    NSString * _primaryPhrase;
    NSString * _punchoutLabel;
    NSString * _settingsPreference;
    NSString * _userActivityRequiredString;
}

@property (nonatomic, retain) NSString *actionIdentifier;
@property (nonatomic, retain) NSArray *alternateNames;
@property (nonatomic, retain) NSString *biomeStreamIdentifier;
@property (nonatomic, retain) NSString *domainIdentifier;
@property (nonatomic) unsigned long long entityBadgeType;
@property (nonatomic) unsigned long long entityThumbnailDisplayStyle;
@property (nonatomic) bool isAlarmResult;
@property (nonatomic) bool isBackgroundRunnable;
@property (nonatomic) bool isCustomAppAttributedShortcut;
@property (nonatomic, retain) NSString *lnPropertyIdentifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *numberOfActionsString;
@property (nonatomic, retain) NSString *primaryPhrase;
@property (nonatomic, retain) NSString *punchoutLabel;
@property (nonatomic, retain) NSString *settingsPreference;
@property (nonatomic, retain) NSString *userActivityRequiredString;

+ (id)bundleId;
+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)alternateNames;
- (id)biomeStreamIdentifier;
- (id)buildAppTopHitEntityCardSection;
- (id)buildBadgingImageWithThumbnail:(id)arg1;
- (id)buildButtonItems;
- (bool)buildButtonItemsAreTrailing;
- (id)buildCommand;
- (id)buildCompactThumbnail;
- (id)buildDescriptions;
- (id)buildDetailedRowCardSection;
- (id)buildFootnote;
- (id)buildResult;
- (id)buildStandardThumbnail;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)buildTrailingThumbnail;
- (id)domainIdentifier;
- (unsigned long long)entityBadgeType;
- (unsigned long long)entityThumbnailDisplayStyle;
- (id)initWithResult:(id)arg1;
- (bool)isAlarmResult;
- (bool)isBackgroundRunnable;
- (bool)isCustomAppAttributedShortcut;
- (id)lnPropertyIdentifier;
- (id)name;
- (id)numberOfActionsString;
- (id)primaryPhrase;
- (id)punchoutLabel;
- (bool)resultShadowsSettingResult;
- (void)setActionIdentifier:(id)arg1;
- (void)setAlternateNames:(id)arg1;
- (void)setBiomeStreamIdentifier:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setEntityBadgeType:(unsigned long long)arg1;
- (void)setEntityThumbnailDisplayStyle:(unsigned long long)arg1;
- (void)setIsAlarmResult:(bool)arg1;
- (void)setIsBackgroundRunnable:(bool)arg1;
- (void)setIsCustomAppAttributedShortcut:(bool)arg1;
- (void)setLnPropertyIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNumberOfActionsString:(id)arg1;
- (void)setPrimaryPhrase:(id)arg1;
- (void)setPunchoutLabel:(id)arg1;
- (void)setSettingsPreference:(id)arg1;
- (void)setUserActivityRequiredString:(id)arg1;
- (id)settingsPreference;
- (id)userActivityRequiredString;

@end