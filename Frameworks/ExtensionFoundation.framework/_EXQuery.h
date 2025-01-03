/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation
 */

@interface _EXQuery : NSObject <NSSecureCoding> {
    void allowsDuplicates;
    void excludeLockedApps;
    void includePostprocessing;
    void inner;
    void predicate;
    void resultType;
}

@property (nonatomic) bool allowsDuplicates;
@property (nonatomic) bool excludeLockedApps;
@property (nonatomic, copy) NSString *extensionPointIdentifier;
@property (nonatomic, readonly) long long hash;
@property (nonatomic) bool includePostprocessing;
@property (nonatomic) unsigned int platform;
@property (nonatomic, retain) NSPredicate *predicate;

+ (id)allExtensionsQuery;
+ (id)executeQueries:(id)arg1;
+ (void)executeQueries:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)executeQuery:(id)arg1;
+ (void)executeQuery:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)extensionPointIdentifierQuery:(id)arg1;
+ (id)extensionPointIdentifierQuery:(id)arg1 platform:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsDuplicates;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)excludeLockedApps;
- (id)extensionPointIdentifier;
- (long long)hash;
- (bool)includePostprocessing;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionPointIdentifier:(id)arg1;
- (id)initWithExtensionPointIdentifier:(id)arg1 predicate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)matches:(id)arg1;
- (bool)matchesRecord:(id)arg1;
- (unsigned int)platform;
- (id)predicate;
- (void)setAllowsDuplicates:(bool)arg1;
- (void)setExcludeLockedApps:(bool)arg1;
- (void)setExtensionPointIdentifier:(id)arg1;
- (void)setIncludePostprocessing:(bool)arg1;
- (void)setPlatform:(unsigned int)arg1;
- (void)setPredicate:(id)arg1;

@end
