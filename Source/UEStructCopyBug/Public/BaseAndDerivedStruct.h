#pragma once

#include "BaseAndDerivedStruct.generated.h"

// --------------------------------------------------------------------------------------------------------------------

USTRUCT(BlueprintType, meta=(NoImplicitConversion))
struct FBaseStruct
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value = -1.0f;
};

USTRUCT(BlueprintType, meta=(NoImplicitConversion))
struct FDerivedStruct : public FBaseStruct
{
	GENERATED_BODY()
};
