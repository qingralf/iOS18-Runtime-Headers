/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFConfiguredStaccatoAction : NSObject <NSSecureCoding> {
    NSString * _associatedBundleIdentifier;
    NSData * _colorScheme;
    NSString * _identifier;
    NSString * _name;
    WFIcon * _previewIcon;
    NSData * _shortcutsMetadata;
}

@property (nonatomic, copy) NSString *associatedBundleIdentifier;
@property (nonatomic, readonly, copy) NSData *colorScheme;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) WFIcon *previewIcon;
@property (nonatomic, readonly, copy) NSString *sectionIdentifier;
@property (nonatomic, copy) NSData *shortcutsMetadata;
@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, readonly) WFColor *tintColor;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedBundleIdentifier;
- (id)colorScheme;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 associatedBundleIdentifier:(id)arg2 name:(id)arg3 previewIcon:(id)arg4 shortcutsMetadata:(id)arg5;
- (id)initWithIdentifier:(id)arg1 associatedBundleIdentifier:(id)arg2 name:(id)arg3 previewIcon:(id)arg4 shortcutsMetadata:(id)arg5 colorScheme:(id)arg6;
- (id)initWithIdentifier:(id)arg1 sectionIdentifier:(id)arg2 associatedBundleIdentifier:(id)arg3 name:(id)arg4 systemImageName:(id)arg5 shortcutsMetadata:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isSystemStaccatoAction;
- (id)name;
- (id)previewIcon;
- (id)sectionIdentifier;
- (void)setAssociatedBundleIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPreviewIcon:(id)arg1;
- (void)setShortcutsMetadata:(id)arg1;
- (id)shortcutsMetadata;
- (id)systemImageName;
- (id)tintColor;
- (bool)usesPreviewIconSymbolOverride;

// Image: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices

- (id)leadingApertureView;
- (id)trailingApertureView;

@end
