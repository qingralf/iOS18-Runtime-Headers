/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMEventBase : NSObject <BMStreamValidating> {
    NSArray * __validators;
}

@property (nonatomic, copy) NSArray *_validators;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)convertValue:(id)arg1 toType:(long long)arg2;
+ (id)propertyDefinitions;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_validators;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (id)json;
- (id)jsonDictionary;
- (void)set_validators:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

@end
