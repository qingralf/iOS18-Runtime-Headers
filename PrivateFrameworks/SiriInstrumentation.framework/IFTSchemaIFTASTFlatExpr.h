/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface IFTSchemaIFTASTFlatExpr : SISchemaInstrumentationMessage {
    IFTSchemaASTFlatExprCallVariant * _call;
    IFTSchemaASTFlatExprCancelVariant * _cancel;
    IFTSchemaASTFlatExprConfirmVariant * _confirm;
    IFTSchemaASTExprContinuePlanningVariant * _continuePlanning;
    IFTSchemaASTFlatExprDotVariant * _dot;
    bool  _endOfPlan;
    bool  _hasCall;
    bool  _hasCancel;
    bool  _hasConfirm;
    bool  _hasContinuePlanning;
    bool  _hasDot;
    bool  _hasEndOfPlan;
    bool  _hasIndex;
    bool  _hasInfix;
    bool  _hasNoMatchingTool;
    bool  _hasPick;
    bool  _hasPickOne;
    bool  _hasPrefix;
    bool  _hasReject;
    bool  _hasResolveTool;
    bool  _hasSay;
    bool  _hasSearch;
    bool  _hasUndo;
    bool  _hasUpdate;
    bool  _hasUpdateParameters;
    bool  _hasValue;
    IFTSchemaASTFlatExprIndexVariant * _index;
    IFTSchemaASTFlatExprInfixVariant * _infix;
    bool  _noMatchingTool;
    IFTSchemaASTFlatExprPickVariant * _pick;
    IFTSchemaASTFlatExprPickOneVariant * _pickOne;
    IFTSchemaASTFlatExprPrefixVariant * _prefix;
    IFTSchemaASTFlatExprRejectVariant * _reject;
    IFTSchemaASTFlatExprResolveToolVariant * _resolveTool;
    IFTSchemaASTFlatExprSayVariant * _say;
    IFTSchemaASTFlatExprSearchVariant * _search;
    IFTSchemaASTFlatExprUndoVariant * _undo;
    IFTSchemaASTFlatExprUpdateVariant * _update;
    IFTSchemaASTFlatExprUpdateParametersVariant * _updateParameters;
    IFTSchemaASTFlatValue * _value;
    unsigned long long  _whichOneof_Astflatexpr;
}

@property (nonatomic, retain) IFTSchemaASTFlatExprCallVariant *call;
@property (nonatomic, retain) IFTSchemaASTFlatExprCancelVariant *cancel;
@property (nonatomic, retain) IFTSchemaASTFlatExprConfirmVariant *confirm;
@property (nonatomic, retain) IFTSchemaASTExprContinuePlanningVariant *continuePlanning;
@property (nonatomic, retain) IFTSchemaASTFlatExprDotVariant *dot;
@property (nonatomic) bool endOfPlan;
@property (nonatomic) bool hasCall;
@property (nonatomic) bool hasCancel;
@property (nonatomic) bool hasConfirm;
@property (nonatomic) bool hasContinuePlanning;
@property (nonatomic) bool hasDot;
@property (nonatomic) bool hasEndOfPlan;
@property (nonatomic) bool hasIndex;
@property (nonatomic) bool hasInfix;
@property (nonatomic) bool hasNoMatchingTool;
@property (nonatomic) bool hasPick;
@property (nonatomic) bool hasPickOne;
@property (nonatomic) bool hasPrefix;
@property (nonatomic) bool hasReject;
@property (nonatomic) bool hasResolveTool;
@property (nonatomic) bool hasSay;
@property (nonatomic) bool hasSearch;
@property (nonatomic) bool hasUndo;
@property (nonatomic) bool hasUpdate;
@property (nonatomic) bool hasUpdateParameters;
@property (nonatomic) bool hasValue;
@property (nonatomic, retain) IFTSchemaASTFlatExprIndexVariant *index;
@property (nonatomic, retain) IFTSchemaASTFlatExprInfixVariant *infix;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool noMatchingTool;
@property (nonatomic, retain) IFTSchemaASTFlatExprPickVariant *pick;
@property (nonatomic, retain) IFTSchemaASTFlatExprPickOneVariant *pickOne;
@property (nonatomic, retain) IFTSchemaASTFlatExprPrefixVariant *prefix;
@property (nonatomic, retain) IFTSchemaASTFlatExprRejectVariant *reject;
@property (nonatomic, retain) IFTSchemaASTFlatExprResolveToolVariant *resolveTool;
@property (nonatomic, retain) IFTSchemaASTFlatExprSayVariant *say;
@property (nonatomic, retain) IFTSchemaASTFlatExprSearchVariant *search;
@property (nonatomic, retain) IFTSchemaASTFlatExprUndoVariant *undo;
@property (nonatomic, retain) IFTSchemaASTFlatExprUpdateVariant *update;
@property (nonatomic, retain) IFTSchemaASTFlatExprUpdateParametersVariant *updateParameters;
@property (nonatomic, retain) IFTSchemaASTFlatValue *value;
@property (nonatomic, readonly) unsigned long long whichOneof_Astflatexpr;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)call;
- (id)cancel;
- (id)confirm;
- (id)continuePlanning;
- (void)deleteCall;
- (void)deleteCancel;
- (void)deleteConfirm;
- (void)deleteContinuePlanning;
- (void)deleteDot;
- (void)deleteEndOfPlan;
- (void)deleteIndex;
- (void)deleteInfix;
- (void)deleteNoMatchingTool;
- (void)deletePick;
- (void)deletePickOne;
- (void)deletePrefix;
- (void)deleteReject;
- (void)deleteResolveTool;
- (void)deleteSay;
- (void)deleteSearch;
- (void)deleteUndo;
- (void)deleteUpdate;
- (void)deleteUpdateParameters;
- (void)deleteValue;
- (id)dictionaryRepresentation;
- (id)dot;
- (bool)endOfPlan;
- (bool)hasCall;
- (bool)hasCancel;
- (bool)hasConfirm;
- (bool)hasContinuePlanning;
- (bool)hasDot;
- (bool)hasEndOfPlan;
- (bool)hasIndex;
- (bool)hasInfix;
- (bool)hasNoMatchingTool;
- (bool)hasPick;
- (bool)hasPickOne;
- (bool)hasPrefix;
- (bool)hasReject;
- (bool)hasResolveTool;
- (bool)hasSay;
- (bool)hasSearch;
- (bool)hasUndo;
- (bool)hasUpdate;
- (bool)hasUpdateParameters;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)index;
- (id)infix;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)noMatchingTool;
- (id)pick;
- (id)pickOne;
- (id)prefix;
- (bool)readFrom:(id)arg1;
- (id)reject;
- (id)resolveTool;
- (id)say;
- (id)search;
- (void)setCall:(id)arg1;
- (void)setCancel:(id)arg1;
- (void)setConfirm:(id)arg1;
- (void)setContinuePlanning:(id)arg1;
- (void)setDot:(id)arg1;
- (void)setEndOfPlan:(bool)arg1;
- (void)setHasCall:(bool)arg1;
- (void)setHasCancel:(bool)arg1;
- (void)setHasConfirm:(bool)arg1;
- (void)setHasContinuePlanning:(bool)arg1;
- (void)setHasDot:(bool)arg1;
- (void)setHasEndOfPlan:(bool)arg1;
- (void)setHasIndex:(bool)arg1;
- (void)setHasInfix:(bool)arg1;
- (void)setHasNoMatchingTool:(bool)arg1;
- (void)setHasPick:(bool)arg1;
- (void)setHasPickOne:(bool)arg1;
- (void)setHasPrefix:(bool)arg1;
- (void)setHasReject:(bool)arg1;
- (void)setHasResolveTool:(bool)arg1;
- (void)setHasSay:(bool)arg1;
- (void)setHasSearch:(bool)arg1;
- (void)setHasUndo:(bool)arg1;
- (void)setHasUpdate:(bool)arg1;
- (void)setHasUpdateParameters:(bool)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setIndex:(id)arg1;
- (void)setInfix:(id)arg1;
- (void)setNoMatchingTool:(bool)arg1;
- (void)setPick:(id)arg1;
- (void)setPickOne:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setReject:(id)arg1;
- (void)setResolveTool:(id)arg1;
- (void)setSay:(id)arg1;
- (void)setSearch:(id)arg1;
- (void)setUndo:(id)arg1;
- (void)setUpdate:(id)arg1;
- (void)setUpdateParameters:(id)arg1;
- (void)setValue:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)undo;
- (id)update;
- (id)updateParameters;
- (id)value;
- (unsigned long long)whichOneof_Astflatexpr;
- (void)writeTo:(id)arg1;

@end
