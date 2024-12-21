/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFExecutableAppShortcut : NSObject <NSSecureCoding> {
    NSArray * _alternatePhrases;
    unsigned long long  _chicletColor;
    WFAutoShortcutEntityInfo * _entityInfo;
    LNAutoShortcutLocalizedPhrase * _phrase;
    LNAutoShortcut * _underlyingAutoShortcut;
}

@property (nonatomic, readonly) NSArray *alternatePhrases;
@property (nonatomic, readonly) NSString *attributionBundleIdentifier;
@property (nonatomic, readonly) NSString *base64ArchivedData;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) unsigned long long chicletColor;
@property (nonatomic, readonly) WFAutoShortcutEntityInfo *entityInfo;
@property (nonatomic, readonly) LNFullyQualifiedActionIdentifier *fullyQualifiedIdentifier;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) bool isDeprecatedStyle;
@property (nonatomic, readonly) WFAppShortcutNamedQueryInfo *namedQueryInfo;
@property (nonatomic, readonly) LNAutoShortcutLocalizedPhrase *phrase;
@property (nonatomic, readonly) NSString *shortTitle;
@property (nonatomic, readonly) NSString *shortcutDescription;
@property (nonatomic, readonly) NSString *triggerPhrase;
@property (nonatomic, readonly) LNAutoShortcut *underlyingAutoShortcut;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alternatePhrases;
- (id)attributionBundleIdentifier;
- (id)base64ArchivedData;
- (id)bundleIdentifier;
- (unsigned long long)chicletColor;
- (void)encodeWithCoder:(id)arg1;
- (id)entityInfo;
- (id)fullyQualifiedIdentifier;
- (id)id;
- (id)initWithAutoShortcut:(id)arg1 phrase:(id)arg2 alternatePhrases:(id)arg3 entityInfo:(id)arg4;
- (id)initWithAutoShortcut:(id)arg1 phrase:(id)arg2 entityInfo:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isDeprecatedStyle;
- (id)namedQueryInfo;
- (id)phrase;
- (id)shortTitle;
- (id)shortcutDescription;
- (id)triggerPhrase;
- (id)underlyingAutoShortcut;

@end