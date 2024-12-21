/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFTSchemaIFTRequestPrescribedPlan : SISchemaInstrumentationMessage {
    IFTSchemaIFTRequestPrescribedPlanConvertTool * _convertTool;
    bool  _hasConvertTool;
    bool  _hasKnowledgeTool;
    bool  _hasOpenSuccessValueFromLatestRequestTool;
    bool  _hasOpenTool;
    bool  _hasSearchTool;
    bool  _hasTextTool;
    IFTSchemaIFTRequestPrescribedPlanKnowledgeTool * _knowledgeTool;
    IFTSchemaIFTRequestPrescribedPlanOpenSuccessValueFromLatestRequestTool * _openSuccessValueFromLatestRequestTool;
    IFTSchemaIFTRequestPrescribedPlanOpenTool * _openTool;
    IFTSchemaIFTRequestPrescribedPlanSearchTool * _searchTool;
    IFTSchemaIFTRequestPrescribedPlanTextTool * _textTool;
    unsigned long long  _whichOneof_Requestprescribedplan;
}

@property (nonatomic, retain) IFTSchemaIFTRequestPrescribedPlanConvertTool *convertTool;
@property (nonatomic) bool hasConvertTool;
@property (nonatomic) bool hasKnowledgeTool;
@property (nonatomic) bool hasOpenSuccessValueFromLatestRequestTool;
@property (nonatomic) bool hasOpenTool;
@property (nonatomic) bool hasSearchTool;
@property (nonatomic) bool hasTextTool;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) IFTSchemaIFTRequestPrescribedPlanKnowledgeTool *knowledgeTool;
@property (nonatomic, retain) IFTSchemaIFTRequestPrescribedPlanOpenSuccessValueFromLatestRequestTool *openSuccessValueFromLatestRequestTool;
@property (nonatomic, retain) IFTSchemaIFTRequestPrescribedPlanOpenTool *openTool;
@property (nonatomic, retain) IFTSchemaIFTRequestPrescribedPlanSearchTool *searchTool;
@property (nonatomic, retain) IFTSchemaIFTRequestPrescribedPlanTextTool *textTool;
@property (nonatomic, readonly) unsigned long long whichOneof_Requestprescribedplan;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)convertTool;
- (void)deleteConvertTool;
- (void)deleteKnowledgeTool;
- (void)deleteOpenSuccessValueFromLatestRequestTool;
- (void)deleteOpenTool;
- (void)deleteSearchTool;
- (void)deleteTextTool;
- (id)dictionaryRepresentation;
- (bool)hasConvertTool;
- (bool)hasKnowledgeTool;
- (bool)hasOpenSuccessValueFromLatestRequestTool;
- (bool)hasOpenTool;
- (bool)hasSearchTool;
- (bool)hasTextTool;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)knowledgeTool;
- (id)openSuccessValueFromLatestRequestTool;
- (id)openTool;
- (bool)readFrom:(id)arg1;
- (id)searchTool;
- (void)setConvertTool:(id)arg1;
- (void)setHasConvertTool:(bool)arg1;
- (void)setHasKnowledgeTool:(bool)arg1;
- (void)setHasOpenSuccessValueFromLatestRequestTool:(bool)arg1;
- (void)setHasOpenTool:(bool)arg1;
- (void)setHasSearchTool:(bool)arg1;
- (void)setHasTextTool:(bool)arg1;
- (void)setKnowledgeTool:(id)arg1;
- (void)setOpenSuccessValueFromLatestRequestTool:(id)arg1;
- (void)setOpenTool:(id)arg1;
- (void)setSearchTool:(id)arg1;
- (void)setTextTool:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)textTool;
- (unsigned long long)whichOneof_Requestprescribedplan;
- (void)writeTo:(id)arg1;

@end