/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
 */

@interface CHSWidgetRelevanceProperties : NSObject <CHSWidgetIdentifiable, NSCopying, NSSecureCoding> {
    CHSExtensionIdentity * _extensionIdentity;
    NSString * _kind;
    double  _lastRelevanceUpdate;
    id /* block */  _relevanceFunction;
    bool  _supportsBackgroundRefresh;
}

@property (nonatomic, readonly) CHSExtensionIdentity *extensionIdentity;
@property (nonatomic, readonly) CHSWidgetRelevanceKey *key;
@property (nonatomic, readonly) NSString *kind;
@property (nonatomic, readonly) double lastRelevanceUpdate;
@property (nonatomic, readonly) NSArray *relevances;
@property (nonatomic, readonly) bool supportsBackgroundRefresh;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionIdentity;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSupportsBackgroundRefresh:(bool)arg1 lastRelevanceUpdate:(double)arg2 relevances:(id)arg3;
- (id)initWithWidgetExtensionIdentity:(id)arg1 kind:(id)arg2 supportsBackgroundRefresh:(bool)arg3 lastRelevanceUpdate:(double)arg4 relevanceFunction:(id /* block */)arg5;
- (id)initWithWidgetExtensionIdentity:(id)arg1 kind:(id)arg2 supportsBackgroundRefresh:(bool)arg3 lastRelevanceUpdate:(double)arg4 relevances:(id)arg5;
- (id)initWithWidgetRelevanceKey:(id)arg1 supportsBackgroundRefresh:(bool)arg2 lastRelevanceUpdate:(double)arg3 relevances:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)key;
- (id)kind;
- (double)lastRelevanceUpdate;
- (bool)matches:(id)arg1;
- (id)relevances;
- (bool)supportsBackgroundRefresh;

@end