#pragma once

#include "BaseAndDerivedStruct.generated.h"

// --------------------------------------------------------------------------------------------------------------------

USTRUCT(BlueprintType)
struct FBaseStruct
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value = -1.0f;
};

USTRUCT(BlueprintType)
struct FDerivedStruct : public FBaseStruct
{
	GENERATED_BODY()
};
