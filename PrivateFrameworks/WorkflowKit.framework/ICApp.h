/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface ICApp : NSObject {
    INAppInfo * _appInfo;
    bool  _checkedInstallStatus;
    NSDictionary * _definition;
    WFImage * _icon;
    NSString * _identifier;
    bool  _installed;
    NSArray * _schemes;
    NSObject<OS_dispatch_queue> * _stateAccessQueue;
}

@property (nonatomic, readonly) NSArray *allBundleIdentifiers;
@property (nonatomic, readonly) INAppInfo *appInfo;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic) bool checkedInstallStatus;
@property (nonatomic, readonly) NSDictionary *definition;
@property (nonatomic, readonly) NSArray *documentActions;
@property (nonatomic, readonly) NSArray *documentTypes;
@property (nonatomic, readonly) NSArray *exportedFileTypes;
@property (nonatomic, readonly) NSString *iTunesIdentifier;
@property (nonatomic, retain) WFImage *icon;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) NSString *identifier;
@property (getter=isInstalled, nonatomic, readonly) bool installed;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *localizedShortName;
@property (nonatomic, readonly) NSArray *metadata;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (nonatomic, readonly) NSArray *schemes;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateAccessQueue;

+ (void)loadIconWithBundleIdentifier:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)allBundleIdentifiers;
- (id)appInfo;
- (id)bundleIdentifier;
- (id)bundleIdentifiersByIdiom;
- (bool)checkedInstallStatus;
- (id)definition;
- (id)description;
- (id)documentActions;
- (id)documentTypes;
- (id)exportedFileTypes;
- (unsigned long long)hash;
- (id)iTunesIdentifier;
- (id)icon;
- (id)iconName;
- (id)identifier;
- (id)identifierFromDictionaryForCurrentIdiom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2;
- (bool)isCurrentlyInstalled;
- (bool)isEqual:(id)arg1;
- (bool)isInstalled;
- (bool)isRestricted;
- (id)localizedName;
- (id)localizedNameWithContext:(id)arg1;
- (id)localizedShortName;
- (id)metadata;
- (void)openFile:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openFile:(id)arg1 withAnnotation:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resetInstalledStatus;
- (id)schemeNamed:(id)arg1;
- (id)schemes;
- (void)setCheckedInstallStatus:(bool)arg1;
- (void)setIcon:(id)arg1;
- (id)stateAccessQueue;
- (void)updateInstalledStatus;

@end
