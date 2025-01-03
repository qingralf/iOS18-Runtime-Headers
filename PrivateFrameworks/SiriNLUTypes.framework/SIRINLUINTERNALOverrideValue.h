/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriNLUTypes.framework/SiriNLUTypes
 */

@interface SIRINLUINTERNALOverrideValue : PBCodable <NSCopying> {
    SIRINLUINTERNALCCQROverrideTemplate * _ccqrOverrideTemplate;
    SIRINLUINTERNALLVCOverrideValue * _lvcOverrideValue;
    SIRINLUINTERNALPlanOverrideValue * _planOverrideValue;
    SIRINLUEXTERNALUserParse * _userParse;
}

@property (nonatomic, retain) SIRINLUINTERNALCCQROverrideTemplate *ccqrOverrideTemplate;
@property (nonatomic, readonly) bool hasCcqrOverrideTemplate;
@property (nonatomic, readonly) bool hasLvcOverrideValue;
@property (nonatomic, readonly) bool hasPlanOverrideValue;
@property (nonatomic, readonly) bool hasUserParse;
@property (nonatomic, retain) SIRINLUINTERNALLVCOverrideValue *lvcOverrideValue;
@property (nonatomic, retain) SIRINLUINTERNALPlanOverrideValue *planOverrideValue;
@property (nonatomic, retain) SIRINLUEXTERNALUserParse *userParse;

- (void).cxx_destruct;
- (id)ccqrOverrideTemplate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCcqrOverrideTemplate;
- (bool)hasLvcOverrideValue;
- (bool)hasPlanOverrideValue;
- (bool)hasUserParse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lvcOverrideValue;
- (void)mergeFrom:(id)arg1;
- (id)planOverrideValue;
- (bool)readFrom:(id)arg1;
- (void)setCcqrOverrideTemplate:(id)arg1;
- (void)setLvcOverrideValue:(id)arg1;
- (void)setPlanOverrideValue:(id)arg1;
- (void)setUserParse:(id)arg1;
- (id)userParse;
- (void)writeTo:(id)arg1;

@end
