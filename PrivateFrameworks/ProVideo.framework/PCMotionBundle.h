/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PCMotionBundle : NSObject <NSXMLParserDelegate> {
    NSURL * _bundleURL;
    NSDictionary * _consolidatedLocalizedInfoDictionary;
    NSDictionary * _infoDictionary;
    NSArray * _localizations;
    NSMutableDictionary * _localizedInfoDictionaries;
    NSDictionary * _localizedInfoDictionary;
    NSArray * _preferredLocalizations;
    NSNumber * _templateFlags;
    struct PCMotionTemplateFlagsParseState { 
        bool foundTemplate; 
        bool foundTemplateFlag; 
        unsigned int templateFlags; 
        bool success; 
    }  _templateFlagsParseState;
    NSArray * _versionComponents;
}

@property (nonatomic, copy) NSURL *bundleURL;
@property (nonatomic, readonly) unsigned long long bundleVersion;
@property (nonatomic, readonly, copy) NSString *category;
@property (nonatomic, retain) NSDictionary *consolidatedLocalizedInfoDictionary;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSString *identifier;
@property (nonatomic, copy) NSDictionary *infoDictionary;
@property (nonatomic, readonly) bool isCopyProtected;
@property (nonatomic, copy) NSArray *localizations;
@property (nonatomic, readonly, copy) NSString *localizedCategory;
@property (nonatomic, retain) NSMutableDictionary *localizedInfoDictionaries;
@property (nonatomic, copy) NSDictionary *localizedInfoDictionary;
@property (nonatomic, readonly, retain) NSURL *localizedLargeThumbnailURL;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, retain) NSURL *localizedSmallThumbnailURL;
@property (nonatomic, readonly, copy) NSString *localizedTheme;
@property (nonatomic, readonly, copy) NSString *localizedVersion;
@property (nonatomic, readonly) unsigned long long majorVersion;
@property (nonatomic, readonly) unsigned long long minorVersion;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, copy) NSArray *preferredLocalizations;
@property (nonatomic, readonly, copy) NSString *projectFilePath;
@property (nonatomic, readonly, retain) NSURL *projectFileURL;
@property (nonatomic, readonly) long long projectType;
@property (nonatomic, readonly, retain) NSString *projectTypeFolderName;
@property (nonatomic, readonly, retain) NSString *projectTypeName;
@property (nonatomic, readonly, copy) NSString *relativeInstallationPath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFCPiPad;
@property (nonatomic, retain) NSNumber *templateFlags;
@property (nonatomic, readonly, copy) NSString *theme;
@property (nonatomic, readonly, copy) NSString *version;
@property (nonatomic, copy) NSArray *versionComponents;

+ (bool)bundleContentsAreEqualAtURL:(id)arg1 andURL:(id)arg2;
+ (id)bundleExtensionForProjectType:(long long)arg1;
+ (id)bundleExtensions;
+ (id)bundleURLForProjectFileURL:(id)arg1;
+ (id)bundleURLInFileURL:(id)arg1;
+ (id)bundleUTIForProjectType:(long long)arg1;
+ (id)bundleUTIs;
+ (id)compositionProjectFileExtensionForProjectType:(long long)arg1;
+ (id)compositionProjectFileUTIForProjectType:(long long)arg1;
+ (long long)compositionTypeForProjectFileExtension:(id)arg1;
+ (long long)compositionTypeForProjectFileUTI:(id)arg1;
+ (long long)compositionTypeForProjectType:(long long)arg1;
+ (id)createTempBundleByCopyingBundleAtURL:(id)arg1 error:(id*)arg2;
+ (id)createTempBundleWithProjectType:(long long)arg1 error:(id*)arg2;
+ (unsigned long long)currentBundleVersion;
+ (id)folderNameForProjectType:(long long)arg1;
+ (id)infoDictionaryAtURL:(id)arg1;
+ (id)infoDictionaryWithBundleVersion:(unsigned long long)arg1 identifier:(id)arg2 version:(id)arg3 projectFilePath:(id)arg4 supportsFCPiPad:(bool)arg5 name:(id)arg6 category:(id)arg7 theme:(id)arg8;
+ (id)infoDictionaryWithBundleVersion:(unsigned long long)arg1 identifier:(id)arg2 version:(id)arg3 projectFilePath:(id)arg4 supportsFCPiPad:(bool)arg5 name:(id)arg6 category:(id)arg7 theme:(id)arg8 additionalEntries:(id)arg9;
+ (id)infoDictionaryWithBundleVersion:(unsigned long long)arg1 version:(id)arg2 projectFilePath:(id)arg3 supportsFCPiPad:(bool)arg4 name:(id)arg5 category:(id)arg6 theme:(id)arg7;
+ (id)infoDictionaryWithBundleVersion:(unsigned long long)arg1 version:(id)arg2 projectFilePath:(id)arg3 supportsFCPiPad:(bool)arg4 name:(id)arg5 category:(id)arg6 theme:(id)arg7 additionalEntries:(id)arg8;
+ (id)infoDictionaryWithDefaults:(id)arg1 andOverrides:(id)arg2;
+ (bool)isStringNilOrEmpty:(id)arg1;
+ (bool)isValidBundleExtension:(id)arg1;
+ (bool)isValidBundleURL:(id)arg1;
+ (bool)isValidBundleUTI:(id)arg1;
+ (bool)isValidProjectFileExtension:(id)arg1;
+ (bool)isValidProjectFileURL:(id)arg1;
+ (bool)isValidProjectFileUTI:(id)arg1;
+ (id)nilOrNonEmptyString:(id)arg1;
+ (id)nilOrNonEmptyString:(id)arg1 withFallback1:(id)arg2 fallback2:(id)arg3;
+ (id)nilOrNonEmptyString:(id)arg1 withFallback:(id)arg2;
+ (id)projectFileExtensionForProjectType:(long long)arg1;
+ (id)projectFileExtensions;
+ (id)projectFileUTIForProjectType:(long long)arg1;
+ (id)projectFileUTIs;
+ (id)projectFolderNames;
+ (long long)projectTypeForBundleExtension:(id)arg1;
+ (long long)projectTypeForBundleUTI:(id)arg1;
+ (long long)projectTypeForProjectFileExtension:(id)arg1;
+ (long long)projectTypeForProjectFileUTI:(id)arg1;
+ (id)projectTypeNameForProjectType:(long long)arg1;
+ (id)projectTypeNames;
+ (id)projectTypes;
+ (bool)removeTempBundleDirectory:(id)arg1 error:(id*)arg2;
+ (id)serializeInfoDictionary:(id)arg1 error:(id*)arg2;
+ (long long)templateTypeForProjectType:(long long)arg1;
+ (id)urlForInfoDictionaryInBundleURL:(id)arg1;
+ (id)urlForLocalizableMediaInBundleURL:(id)arg1;
+ (id)urlForLocalizableResourcesInBundleURL:(id)arg1;
+ (id)urlForLocalizableThumbnailsInBundleURL:(id)arg1;
+ (id)urlForLocalizedInfoStringsInBundleURL:(id)arg1 localization:(id)arg2;
+ (id)urlForLocalizedResourcesInBundleURL:(id)arg1 localization:(id)arg2;
+ (id)urlForMediaInBundleURL:(id)arg1;
+ (id)urlForProjectFilePath:(id)arg1 inBundleURL:(id)arg2;
+ (id)urlForResourcesInBundleURL:(id)arg1;
+ (id)urlForThumbnailsInBundleURL:(id)arg1;

- (id)URLForResource:(id)arg1;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3;
- (id)bundleURL;
- (unsigned long long)bundleVersion;
- (id)category;
- (id)categoryForLocalization:(id)arg1;
- (id)consolidatedLocalizedInfoDictionary;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)infoDictionary;
- (id)initWithURL:(id)arg1;
- (bool)isCopyProtected;
- (id)largeThumbnailURLForLocalization:(id)arg1;
- (id)localizations;
- (id)localizedAttributedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedAttributedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localization:(id)arg4;
- (id)localizedCategory;
- (id)localizedInfoDictionaries;
- (id)localizedInfoDictionary;
- (id)localizedInfoDictionaryForLocalization:(id)arg1;
- (id)localizedInfoDictionaryWithDefaults:(id)arg1;
- (id)localizedInfoStringsForLocalization:(id)arg1;
- (id)localizedLargeThumbnailURL;
- (id)localizedName;
- (id)localizedParameterForKey:(id)arg1;
- (id)localizedSmallThumbnailURL;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localization:(id)arg4;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 localization:(id)arg4 found:(bool*)arg5;
- (id)localizedTheme;
- (id)localizedVersion;
- (unsigned long long)majorVersion;
- (unsigned long long)minorVersion;
- (id)name;
- (id)nameForLocalization:(id)arg1;
- (id)objectForInfoDictionaryKey:(id)arg1 localization:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)preferredLocalizations;
- (id)projectFilePath;
- (id)projectFileURL;
- (long long)projectType;
- (id)projectTypeFolderName;
- (id)projectTypeName;
- (id)relativeInstallationPath;
- (void)setBundleURL:(id)arg1;
- (void)setConsolidatedLocalizedInfoDictionary:(id)arg1;
- (void)setInfoDictionary:(id)arg1;
- (void)setLocalizations:(id)arg1;
- (void)setLocalizedInfoDictionaries:(id)arg1;
- (void)setLocalizedInfoDictionary:(id)arg1;
- (void)setPreferredLocalizations:(id)arg1;
- (void)setTemplateFlags:(id)arg1;
- (void)setVersionComponents:(id)arg1;
- (id)smallThumbnailURLForLocalization:(id)arg1;
- (bool)supportsFCPiPad;
- (id)templateFlags;
- (id)theme;
- (id)themeForLocalization:(id)arg1;
- (id)version;
- (id)versionComponents;
- (id)versionForComponentAtIndex:(unsigned long long)arg1;
- (id)versionForLocalization:(id)arg1;

@end
