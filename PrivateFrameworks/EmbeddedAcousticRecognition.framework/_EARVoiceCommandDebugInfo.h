/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARVoiceCommandDebugInfo : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _commandParserMachAbsoluteEndTicks;
    unsigned long long  _commandParserMachAbsoluteStartTicks;
    unsigned long long  _commandParserMachContinuousEndTicks;
    unsigned long long  _commandParserMachContinuousStartTicks;
    NSString * _commandUtterance;
    bool  _hasNoVoiceCommandAfterRespeakCheck;
    bool  _hasVoiceCommandAfterReranking;
    bool  _hasVoiceCommandEditIntent;
    bool  _hasVoiceCommandInExhaustiveParses;
    bool  _hasVoiceCommandParses;
    NSString * _payload;
    NSString * _precedingUtterance;
    NSString * _target;
}

@property (nonatomic, readonly) unsigned long long commandParserMachAbsoluteEndTicks;
@property (nonatomic, readonly) unsigned long long commandParserMachAbsoluteStartTicks;
@property (nonatomic, readonly) unsigned long long commandParserMachContinuousEndTicks;
@property (nonatomic, readonly) unsigned long long commandParserMachContinuousStartTicks;
@property (nonatomic, readonly) NSString *commandUtterance;
@property (nonatomic, readonly) bool hasNoVoiceCommandAfterRespeakCheck;
@property (nonatomic, readonly) bool hasVoiceCommandAfterReranking;
@property (nonatomic, readonly) bool hasVoiceCommandEditIntent;
@property (nonatomic, readonly) bool hasVoiceCommandInExhaustiveParses;
@property (nonatomic, readonly) bool hasVoiceCommandParses;
@property (nonatomic, readonly) NSString *payload;
@property (nonatomic, readonly) NSString *precedingUtterance;
@property (nonatomic, readonly) NSString *target;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)commandParserMachAbsoluteEndTicks;
- (unsigned long long)commandParserMachAbsoluteStartTicks;
- (unsigned long long)commandParserMachContinuousEndTicks;
- (unsigned long long)commandParserMachContinuousStartTicks;
- (id)commandUtterance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasNoVoiceCommandAfterRespeakCheck;
- (bool)hasVoiceCommandAfterReranking;
- (bool)hasVoiceCommandEditIntent;
- (bool)hasVoiceCommandInExhaustiveParses;
- (bool)hasVoiceCommandParses;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrecedingUtterance:(id)arg1 commandUtterance:(id)arg2 target:(id)arg3 payload:(id)arg4 hasVoiceCommandInExhaustiveParses:(bool)arg5 hasVoiceCommandParses:(bool)arg6 hasVoiceCommandEditIntent:(bool)arg7 hasVoiceCommandAfterReranking:(bool)arg8 hasNoVoiceCommandAfterRespeakCheck:(bool)arg9 commandParserMachContinuousStartTicks:(unsigned long long)arg10 commandParserMachContinuousEndTicks:(unsigned long long)arg11 commandParserMachAbsoluteStartTicks:(unsigned long long)arg12 commandParserMachAbsoluteEndTicks:(unsigned long long)arg13;
- (bool)isEqual:(id)arg1;
- (id)payload;
- (id)precedingUtterance;
- (id)target;

@end