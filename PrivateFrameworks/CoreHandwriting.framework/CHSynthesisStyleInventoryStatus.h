/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHSynthesisStyleInventoryStatus : NSObject <NSSecureCoding> {
    NSSet * _characterCoverage;
    bool  _hasAllDigits;
    NSString * _inventoryRelativePath;
    NSURL * _inventoryStorageURL;
    bool  _isPersonalizationAvailable;
    long long  _personalizedSynthesisModelState;
    NSString * _personalizedSynthesisModelVersion;
    long long  _samplesWithoutStylePredictionCount;
    long long  _styleSampleCount;
}

@property (nonatomic, readonly) NSSet *characterCoverage;
@property (nonatomic, readonly) bool hasAllDigits;
@property (nonatomic, readonly) NSString *inventoryRelativePath;
@property (nonatomic, readonly) NSURL *inventoryStorageURL;
@property (nonatomic, readonly) bool isPersonalizationAvailable;
@property (nonatomic, readonly) long long personalizedSynthesisModelState;
@property (nonatomic, readonly) NSString *personalizedSynthesisModelVersion;
@property (nonatomic, readonly) long long samplesWithoutStylePredictionCount;
@property (nonatomic, readonly) long long styleSampleCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)characterCoverage;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAllDigits;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsPersonalizationAvailable:(bool)arg1 personalizedSynthesisModelState:(long long)arg2 personalizedSynthesisModelVersion:(id)arg3;
- (id)initWithIsPersonalizationAvailable:(bool)arg1 personalizedSynthesisModelState:(long long)arg2 personalizedSynthesisModelVersion:(id)arg3 hasAllDigits:(bool)arg4 styleSampleCount:(long long)arg5 samplesWithoutStylePredictionCount:(long long)arg6 characterCoverage:(id)arg7 inventoryStorageURL:(id)arg8 inventoryRelativePath:(id)arg9;
- (id)inventoryRelativePath;
- (id)inventoryStorageURL;
- (bool)isPersonalizationAvailable;
- (long long)personalizedSynthesisModelState;
- (id)personalizedSynthesisModelVersion;
- (long long)samplesWithoutStylePredictionCount;
- (long long)styleSampleCount;

@end
