/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUArraySetting : NUSetting {
    NUSetting * _content;
}

@property (readonly) NUSetting *content;

+ (id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2;
+ (id)supportedAttributes;

- (void).cxx_destruct;
- (id)content;
- (id)copy:(id)arg1;
- (id)copyArray:(id)arg1;
- (id)description;
- (id)deserialize:(id)arg1 error:(out id*)arg2;
- (id)init;
- (id)initWithAttributes:(id)arg1;
- (id)initWithContent:(id)arg1 attributes:(id)arg2;
- (bool)isValid:(out id*)arg1;
- (id)serialize:(id)arg1 error:(out id*)arg2;
- (bool)serializeIntoDictionary:(id)arg1 error:(out id*)arg2;
- (long long)type;
- (bool)validate:(id)arg1 error:(out id*)arg2;
- (bool)validateAttribute:(id)arg1 value:(id)arg2 error:(out id*)arg3;

@end
