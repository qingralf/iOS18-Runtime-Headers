/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHCustomIconElement : NSObject <NSCopying, SBLeafIconDataSource> {
    NSString * _containerBundleIdentifier;
    long long  _suggestionSource;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly, copy) NSString *configurationStorageIdentifier; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *containerBundleIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long suggestionSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) SBHIconGridSizeClassSet *supportedGridSizeClasses;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier; /* unknown property attribute: ? */

+ (Class)elementClassWithIdentifier:(id)arg1;
+ (id)elementIdentifier;
+ (id)elementKind;

- (void).cxx_destruct;
- (id)containerBundleIdentifier;
- (id)copyWithSuggestionSource:(long long)arg1;
- (id)copyWithUniqueIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)init;
- (id)initWithUniqueIdentifier:(id)arg1;
- (unsigned long long)priorityForIcon:(id)arg1;
- (long long)suggestionSource;
- (id)supportedGridSizeClasses;
- (id)supportedGridSizeClassesForIcon:(id)arg1;
- (id)uniqueIdentifier;

@end
