/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFOpenCalculationCommand : SFCommand <NSCopying, NSSecureCoding, SFOpenCalculationCommand> {
    struct { 
        unsigned int shouldOpenCurrencyConversionProvider : 1; 
    }  _has;
    NSString * _input;
    NSString * _output;
    bool  _shouldOpenCurrencyConversionProvider;
}

@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (nonatomic, retain) SFCommandReference *commandReference;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *input;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (nonatomic, copy) NSString *output;
@property (nonatomic) bool shouldOpenCurrencyConversionProvider;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasShouldOpenCurrencyConversionProvider;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)input;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)output;
- (void)setInput:(id)arg1;
- (void)setOutput:(id)arg1;
- (void)setShouldOpenCurrencyConversionProvider:(bool)arg1;
- (bool)shouldOpenCurrencyConversionProvider;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)_cpCommandType;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUICommandHandlerClass;
- (id)_searchui_completionImage;
- (id)_searchui_overriddenBridgeStringWithCompletion:(id)arg1;
- (id)_searchui_overriddenExtensionString;

@end
